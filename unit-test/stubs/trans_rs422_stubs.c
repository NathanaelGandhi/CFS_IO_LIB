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

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in trans_rs422 header
 */

#include "trans_rs422.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422Close()
 * ----------------------------------------------------
 */
int32 IO_TransRS422Close(int32 fd)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422Close, int32);

    UT_GenStub_AddParam(IO_TransRS422Close, int32, fd);

    UT_GenStub_Execute(IO_TransRS422Close, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422Close, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422GetBaudRateMacro()
 * ----------------------------------------------------
 */
speed_t IO_TransRS422GetBaudRateMacro(int32 bps)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422GetBaudRateMacro, speed_t);

    UT_GenStub_AddParam(IO_TransRS422GetBaudRateMacro, int32, bps);

    UT_GenStub_Execute(IO_TransRS422GetBaudRateMacro, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422GetBaudRateMacro, speed_t);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422Init()
 * ----------------------------------------------------
 */
int32 IO_TransRS422Init(IO_TransRS422Config_t *configIn)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422Init, int32);

    UT_GenStub_AddParam(IO_TransRS422Init, IO_TransRS422Config_t *, configIn);

    UT_GenStub_Execute(IO_TransRS422Init, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422Init, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422Read()
 * ----------------------------------------------------
 */
int32 IO_TransRS422Read(int32 fd, uint8 *buffer, int32 numBytes)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422Read, int32);

    UT_GenStub_AddParam(IO_TransRS422Read, int32, fd);
    UT_GenStub_AddParam(IO_TransRS422Read, uint8 *, buffer);
    UT_GenStub_AddParam(IO_TransRS422Read, int32, numBytes);

    UT_GenStub_Execute(IO_TransRS422Read, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422Read, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422ReadTimeout()
 * ----------------------------------------------------
 */
int32 IO_TransRS422ReadTimeout(int32 fd, uint8 *buffer, int32 numBytes, int32 timeoutIn)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422ReadTimeout, int32);

    UT_GenStub_AddParam(IO_TransRS422ReadTimeout, int32, fd);
    UT_GenStub_AddParam(IO_TransRS422ReadTimeout, uint8 *, buffer);
    UT_GenStub_AddParam(IO_TransRS422ReadTimeout, int32, numBytes);
    UT_GenStub_AddParam(IO_TransRS422ReadTimeout, int32, timeoutIn);

    UT_GenStub_Execute(IO_TransRS422ReadTimeout, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422ReadTimeout, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransRS422Write()
 * ----------------------------------------------------
 */
int32 IO_TransRS422Write(int32 fd, uint8 *msg, int32 size)
{
    UT_GenStub_SetupReturnBuffer(IO_TransRS422Write, int32);

    UT_GenStub_AddParam(IO_TransRS422Write, int32, fd);
    UT_GenStub_AddParam(IO_TransRS422Write, uint8 *, msg);
    UT_GenStub_AddParam(IO_TransRS422Write, int32, size);

    UT_GenStub_Execute(IO_TransRS422Write, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransRS422Write, int32);
}
