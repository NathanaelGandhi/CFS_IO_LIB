/*******************************************************************************
 * File: trans_udp.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 * Purpose:
 *   Provides the functionality to communicate over a UDP socket.
 *   Supports POSIX.
 *
 * Reference:
 *
 * Notes:
 *   1. Socket set to blocking with timeouts.
 *   2. Set timeouts to IO_TRANS_PEND_FOREVER or 0 to block forever.
 *   3. Timeouts for socket do not affect behavior of select if used.
 *   4. Use the IO_TransUdpRcv function if used with trans_select library.
 *
 * History:
 *   Apr 07, 2015  Guy de Carufel * Created
 *   June 2, 2015  Guy de Carufel * Revised API
 *
 ******************************************************************************/

#include <errno.h>
#include <string.h>

#include "trans_udp.h"

/** Initialize (create, configure and bind) a UDP Socket */
int32 IO_TransUdpInit(IO_TransUdpConfig_t *config, IO_TransUdp_t *udp)
{
    /* Create socket */
    if (IO_TransUdpCreateSocket(udp) != OS_SUCCESS)
    {
        return IO_TRANS_UDP_SOCKETCREATE_ERROR;
    }

    /* Configure socket */
    if (IO_TransUdpConfigSocket(config, udp) != OS_SUCCESS)
    {
        return IO_TRANS_UDP_SOCKETOPT_ERROR;
    }

    /* Bind socket */
    if (IO_TransUdpBindSocket(udp) < 0)
    {
        return IO_TRANS_UDP_SOCKETBIND_ERROR;
    }

    return udp->sockId;
}

/** Create a IPv4 Datagram UDP Socket */
int32 IO_TransUdpCreateSocket(IO_TransUdp_t *udp)
{
    int32 Status = IO_TRANS_UDP_NO_ERROR;
    if (udp == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Create socket */
    /* AF_INET: IPv4 */
    /* SOCK_DGRAM: Datagram socket */
    /* IPPROTO_UDP:  UDP socket */
    Status = OS_SocketOpen(&udp->sockId, OS_SocketDomain_INET, OS_SocketType_DATAGRAM);

    if (Status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: create socket failed. "
                          "errno:%d",
                          errno);
    }

    return Status;
}

/** Set the UDP Socket sockAddr structure */
int32 IO_TransUdpConfigSocket(IO_TransUdpConfig_t *config, IO_TransUdp_t *udp)
{
    int32 status = IO_TRANS_UDP_NO_ERROR;
    // struct timeval timeout;

    if (udp == NULL || config == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    if (OS_ObjectIdToInteger(udp->sockId) < 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: Socket not created. "
                          "Can't config.");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    if ((config->timeoutRcv < 0 && config->timeoutRcv != IO_TRANS_PEND_FOREVER) ||
        (config->timeoutSnd < 0 && config->timeoutSnd != IO_TRANS_PEND_FOREVER))
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: Bad config timeout input.");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Get IP address from cAddr */
    /* NOTE: inet_aton errors out if cAddr = "0.0.0.0", the value of
     * IO_TRANS_UDP_INADDR_ANY.  So if this is the case, set uiAddr to
     * the system defined value of INADDR_ANY
     * */
    status = OS_SocketAddrInit(&udp->sockAddr, OS_SocketDomain_INET);

    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: Cant init Socket Address buffer");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    status = OS_SocketAddrInit(&udp->srcAddr, OS_SocketDomain_INET);

    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: Cant init Source Address buffer");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Save UDP Socket Addr structure */
    status = OS_SocketAddrFromString(&udp->sockAddr, config->cAddr);
    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Bad config addr input:%s",
                          (char *)&config->cAddr);
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    status = OS_SocketAddrSetPort(&udp->sockAddr, config->usPort);
    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Bad config port input %d",
                          config->usPort);
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    // TODO commenting for now because receive and send functions have their own timeout as a param -LM
    /* Set Receive Timeout */
    // if (config->timeoutRcv != 0)
    // {
    //     timeout.tv_sec  = (long)(config->timeoutRcv / 1000);
    //     timeout.tv_usec = (long)((config->timeoutRcv % 1000) * 1000);

    //     if (setsockopt(udp->sockId, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout)) < 0)
    //     {
    //         CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
    //                           "IO_TransUDP Error: Set option SO_RCVTIMEO failed. "
    //                           "Timeout input:%d",
    //                           config->timeoutRcv);

    //         return IO_TRANS_UDP_SOCKETOPT_ERROR;
    //     }
    // }

    // /* Set Send Timeout */
    // if (config->timeoutSnd != 0)
    // {
    //     timeout.tv_sec  = (long)(config->timeoutSnd / 1000);
    //     timeout.tv_usec = (long)((config->timeoutSnd % 1000) * 1000);

    //     if (setsockopt(udp->sockId, SOL_SOCKET, SO_SNDTIMEO, (char *)&timeout, sizeof(timeout)) < 0)
    //     {
    //         CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
    //                           "IO_TransUDP Error: Set option SO_SNDTIMEO failed. "
    //                           "Timeout input:%d",
    //                           config->timeoutSnd);

    //         return IO_TRANS_UDP_SOCKETOPT_ERROR;
    //     }
    // }

    return IO_TRANS_UDP_NO_ERROR;
}

/** Bind socket to srcAddr for receiving socket */
int32 IO_TransUdpBindSocket(IO_TransUdp_t *udp)
{
    if (udp == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Bind socket to port */
    if (OS_SocketBind(udp->sockId, &udp->sockAddr) != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: bind socket failed. errno:%d", errno);
        return IO_TRANS_UDP_SOCKETBIND_ERROR;
    }

    return IO_TRANS_UDP_NO_ERROR;
}

/** Close a UDP Socket */
int32 IO_TransUdpCloseSocket(IO_TransUdp_t *udp)
{
    int32 status;

    if (udp == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    status = OS_SocketShutdown(udp->sockId, OS_SocketShutdownMode_SHUT_READWRITE);

    if (status != 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: Failed to close socket ID:%d, "
                          "errno:%d",
                          udp->sockId, status);
    }

    return status;
}

/** Set the destination address structure */
int32 IO_TransUdpSetDestAddr(IO_TransUdp_t *udp, char *destAddr, uint16 usPort)
{
    int32 status;

    if (udp == NULL || destAddr == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Get IP address from cAddr */
    /* Initialize destination socket structure */

    status = OS_SocketAddrInit(&udp->destAddr, OS_SocketDomain_INET);
    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR,
                          "IO_TransUDP Error: cant init dest address buffer");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    /* Save UDP Socket Destination Addr structure */
    status = OS_SocketAddrFromString(&udp->destAddr, destAddr);
    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Bad config addr input:%s",
                          destAddr);
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    status = OS_SocketAddrSetPort(&udp->destAddr, usPort);
    if (status != OS_SUCCESS)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Bad config port input %d",
                          usPort);
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_INFORMATION, "IO_TransUDP: Destination IP set to %s:%u",
                      destAddr, usPort);

    return IO_TRANS_UDP_NO_ERROR;
}

/** Receive message on blocking socket with select.
 *  Will timeout after selectTimout based on input argument.
 *  Do not use this function if you are using the IO_Trans_Select library. */
int32 IO_TransUdpRcvTimeout(IO_TransUdp_t *udp, uint8 *buffer, int32 bufSize, int32 selectTimeout)
{
    // struct timeval timeout;
    // fd_set fdSet;
    int32 size = 0;

    if (udp == NULL || buffer == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    // FD_ZERO(&fdSet);
    // FD_SET(udp->sockId, &fdSet);

    // /* Wait on socket for timeout time until some data
    //  * is available. */
    // if (selectTimeout == IO_TRANS_PEND_FOREVER)
    // {
    //     size = select(udp->sockId + 1, &fdSet, NULL, NULL, NULL);
    // }
    // else
    // {
    //     timeout.tv_sec  = selectTimeout / 1000000;
    //     timeout.tv_usec = selectTimeout % 1000000;
    //     size            = select(udp->sockId + 1, &fdSet, NULL, NULL, &timeout);
    // }

    /* Read the Socket if some data is available. */
    if (bufSize > 0)
    {
        size = OS_SocketRecvFrom(udp->sockId, (void *)buffer, (size_t)bufSize, &udp->srcAddr, selectTimeout);
    }

    return size;
}

/** Receive message on blocking socket.
 *  Will block for timoutRcv msec based on udp configuration. */
int32 IO_TransUdpRcv(IO_TransUdp_t *udp, uint8 *buffer, int32 bufSize)
{
    int32 msgSize;

    if (udp == NULL || buffer == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    msgSize = OS_SocketRecvFrom(udp->sockId, (void *)buffer, (size_t)bufSize, &udp->srcAddr, OS_PEND);

    /* Return size of zero if timed out. */
    if (msgSize < 0)
    {
        msgSize = 0;
    }

    return msgSize;
}

/** Send message on outbound socket */
int32 IO_TransUdpSnd(IO_TransUdp_t *udp, uint8 *msgPtr, int32 size)
{
    int32 sizeOut;

    if (udp == NULL || msgPtr == NULL)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: Null input argument. ");
        return IO_TRANS_UDP_BAD_INPUT_ERROR;
    }

    sizeOut = OS_SocketSendTo(udp->sockId, (void *)msgPtr, (size_t)size, &udp->destAddr);

    if (sizeOut < 0)
    {
        CFE_EVS_SendEvent(IO_LIB_TRANS_UDP_EID, CFE_EVS_EventType_ERROR, "IO_TransUDP Error: errno:%d on Send.", errno);
        return sizeOut;
    }

    return sizeOut;
}
