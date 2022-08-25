/*******************************************************************************
 * File: trans_rs422.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 * Purpose:
 *   Provides the functionality to communicate over an RS-422 serial port.
 *   Suports VXWorks and POSIX OS.
 *
 * Reference:
 *   http://www.tldp.org/HOWTO/text/Serial-Programming-HOWTO
 *   http://linux.die.net/man/3/tcsetattr
 *   http://fabiobaltieri.com/2011/08/24/using-serial-ports-linux/
 *   http://stackoverflow.com/questions/25996171/
 *       linux-blocking-vs-non-blocking-serial-read
 *   http://www.vxdev.com/docs/vx55man/vxworks/guide/c-iosys.html
 *
 * Notes:
 *   1. The serial port is set to non-blocking to prevent lock-up if link is
 *   interrupted and/or not all of the expected message is received.
 *   2. The VTIME and VMIN take presendence over NON_BLOCKING. If VMIN and
 *   VTIME > 0 (recommended), timer will only start if at least one byte is
 *   received. Read will return after at least VMIN bytes are received,
 *   or VTIME timeout. VTIME is an intercharacter timout in this case. Use the
 *   ReadTimeout function or use select with timeout at a higher level before
 *   calling the TransRS422Read function to prevent indefinite blocking.
 *
 * History:
 *   Apr 07, 2015  Guy de Carufel
 *    * Created
 *
 ******************************************************************************/

#include <errno.h>
#include <string.h>

#include "trans_rs422.h"

/* Local Prototype */
#ifndef _VXWORKS_OS_
speed_t IO_TransRS422GetBaudRateMacro(int32 bps);
#endif

/** Initialize an RS422 serial port */
int32 IO_TransRS422Init(IO_TransRS422Config_t *configIn, IO_TransRS422_t *rs422)
{
    int32                  Status = IO_TRANS_RS422_NO_ERROR;
    IO_TransRS422Config_t *config = (IO_TransRS422Config_t *)configIn;

    if (config == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR, "IO_TransRS422 Error: NULL Config input.");

        return IO_TRANS_RS422_BADINPUT_ERR;
    }

#ifndef _VXWORKS_OS_
    speed_t baudRate = IO_TransRS422GetBaudRateMacro(config->baudRate);
    if (baudRate == -1)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR, "IO_TransRS422 Error: Bad input baud rate.");

        return IO_TRANS_RS422_BAUDRATE_ERR;
    }
#endif

    if (strcmp(config->device, "") == 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR, "IO_TransRS422 Error: Bad config device.");

        return IO_TRANS_RS422_BADDEVICE_ERR;
    }

    /* Open the serial port as read / write non-blocking. */
    Status = OS_OpenCreate(&rs422->fd, config->device, IO_TRANS_RS422_OPEN_FLAGS, 0);
    if (&rs422->fd < 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransRS422 Error: Serial Port: \"%s\" "
                          "Does not exist. Open failed.",
                          config->device);
        return IO_TRANS_RS422_OPEN_ERR;
    }

#ifdef _VXWORKS_OS_
    /* Set the baudrate */
    if (ioctl(&rs422->fd, FIOBAUDRATE, config->baudRate) < 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR, "IO_TransRS422 Error: Bad input baud rate.");

        close(&rs422->fd);
        return IO_TRANS_RS422_BAUDRATE_ERR;
    }

    /* Set to raw mode */
    ioctl(&rs422->fd, FIOSETOPTIONS, OPT_RAW);

    /* Clear the buffer */
    ioctl(&rs422->fd, FIOFLUSH, 0);

    /* Set hardware control flags */
    if (ioctl(&rs422->fd, SIO_HW_OPTS_SET, CS8 | CLOCAL | CREAD | config->cFlags) < 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransRS422 Error: Attribute setting failed.");
        close(&rs422->fd);
        return IO_TRANS_RS422_SETATTR_ERR;
    }

#else
    {
        struct termios oldAttr;
        struct termios setAttr;
        struct termios newAttr;

        /* Get attributes of device */
        tcgetattr(OS_ObjectIdToInteger(rs422->fd), &oldAttr);

        /* Set new attr config */
        CFE_PSP_MemSet((void *)&setAttr, 0x0, sizeof(setAttr));
        /* Set controls
         * Custom cFlags
         * CS8: Set bit/parity/stopbits to 8N1
         * CLOCAL: Ignore modem control
         * CREAD: Enable Receiver */
        setAttr.c_cflag = CS8 | CLOCAL | CREAD | config->cFlags;
        /* Input config: ignore parity. */
        setAttr.c_iflag = IGNPAR;
        /* Output config: raw. */
        setAttr.c_oflag = 0;

        /* Set to non-cononical
         * (Since we are expecting binary data, we cannot rely on
         * New-Line ASCII characters) */
        setAttr.c_lflag &= ~(ICANON);
        setAttr.c_lflag &= ~(ECHO);

        /* Set non-canonical Control limits. */
        /* VTIME in 100ms. Timer starts after first byte is received. */
        setAttr.c_cc[VTIME] = config->timeout / 100;
        /* Min number of bytes to return on read (or timeout) */
        setAttr.c_cc[VMIN] = config->minBytes;

        /* Set baudrate */
        cfsetspeed(&setAttr, baudRate);

        /* Flush device and set new options. */
        tcflush(OS_ObjectIdToInteger(rs422->fd), TCIOFLUSH);
        tcsetattr(OS_ObjectIdToInteger(rs422->fd), TCSANOW, &setAttr);

        /* Verify that the configuration has been set correctly */
        CFE_PSP_MemSet((void *)&newAttr, 0x0, sizeof(newAttr));
        tcgetattr(OS_ObjectIdToInteger(rs422->fd), &newAttr);

        if (memcmp((void *)&newAttr, (void *)&setAttr, sizeof(setAttr)) != 0)
        {
            CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR,
                              "IO_TransRS422 Error: Attribute setting failed.");
            tcsetattr(OS_ObjectIdToInteger(rs422->fd), TCSANOW, &oldAttr);
            return IO_TRANS_RS422_SETATTR_ERR;
        }
    }
#endif

    return Status;
}

/** Close the serial port connection */
int32 IO_TransRS422Close(IO_TransRS422_t *rs422)
{
    int32 Status = IO_TRANS_RS422_NO_ERROR;
    Status       = OS_close(rs422->fd);
    return Status;
}

/** Read numBytes from serial port with timeout (in us) */
int32 IO_TransRS422ReadTimeout(IO_TransRS422_t *rs422, uint8 *buffer, int32 numBytes, int32 timeoutIn)
{
    struct timeval timeout;
    fd_set         fdSet;
    int32          size   = 0;
    int32          Status = IO_TRANS_RS422_NO_ERROR;

    FD_ZERO(&fdSet);
    FD_SET((int32)&rs422->fd, &fdSet);

    /* Wait on serial port for timeout time until some data
     * is available. */
    if (timeoutIn == IO_TRANS_PEND_FOREVER)
    {
        size = select(rs422->fd + 1, &fdSet, NULL, NULL, NULL);
    }
    else
    {
        timeout.tv_sec  = timeoutIn / 1000000;
        timeout.tv_usec = timeoutIn % 1000000;
        size            = select(rs422->fd + 1, &fdSet, NULL, NULL, &timeout);
    }

    /* Read the serial port if some data is available. */
    if (size > 0)
    {
        Status = IO_TransRS422Read(rs422, buffer, numBytes);
    }
    else
    {
        Status = IO_TRANS_RS422_ERROR;
    }

    return Status;
}

/** Read numBytes from serial port */
int32 IO_TransRS422Read(IO_TransRS422_t *rs422, uint8 *buffer, int32 numBytes)
{
    int32 Status = IO_TRANS_RS422_NO_ERROR;
    char *cursor = (char *)buffer;

    Status = OS_read(rs422->fd, cursor, numBytes);

    return Status;
}

/** Write message to serial port */
int32 IO_TransRS422Write(IO_TransRS422_t *rs422, uint8 *msg, int32 size)
{
    int32 Status = IO_TRANS_RS422_NO_ERROR;

    Status = OS_write(rs422->fd, (char *)msg, size);

    if (Status == -1)
    {
        if (errno == EBADF)
        {
            CFE_EVS_SendEvent(IO_LIB_TRANS_RS422_EID, CFE_EVS_EventType_ERROR,
                              "IO_TransRS422 Error: Write to bad device.");
            return IO_TRANS_RS422_BADDEVICE_ERR;
        }
        else
        {
            return IO_TRANS_RS422_ERROR;
        }
    }

    return Status;
}

#ifndef _VXWORKS_OS_
/** Get baudrate macro from a bps input */
speed_t IO_TransRS422GetBaudRateMacro(int32 bps)
{
    speed_t baudRate = B0;

    switch (bps)
    {
        case 19200:
            baudRate = B19200;
            break;
        case 38400:
            baudRate = B38400;
            break;
        case 57600:
            baudRate = B57600;
            break;
        case 115200:
            baudRate = B115200;
            break;
        case 230400:
            baudRate = B230400;
            break;
        case 460800:
            baudRate = B460800;
            break;
        case 921600:
            baudRate = B921600;
            break;
        default:
            return -1;
    }

    return baudRate;
}
#endif
