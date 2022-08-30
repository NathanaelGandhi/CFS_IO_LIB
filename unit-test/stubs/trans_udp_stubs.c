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

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in trans_udp header
 */

#include "trans_udp.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpBindSocket()
 * ----------------------------------------------------
 */
int32 IO_TransUdpBindSocket(IO_TransUdp_t *udp)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpBindSocket, int32);

    UT_GenStub_AddParam(IO_TransUdpBindSocket, IO_TransUdp_t *, udp);

    UT_GenStub_Execute(IO_TransUdpBindSocket, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpBindSocket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpCloseSocket()
 * ----------------------------------------------------
 */
int32 IO_TransUdpCloseSocket(IO_TransUdp_t *udp)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpCloseSocket, int32);

    UT_GenStub_AddParam(IO_TransUdpCloseSocket, IO_TransUdp_t *, udp);

    UT_GenStub_Execute(IO_TransUdpCloseSocket, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpCloseSocket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpConfigSocket()
 * ----------------------------------------------------
 */
int32 IO_TransUdpConfigSocket(IO_TransUdpConfig_t *config, IO_TransUdp_t *udp)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpConfigSocket, int32);

    UT_GenStub_AddParam(IO_TransUdpConfigSocket, IO_TransUdpConfig_t *, config);
    UT_GenStub_AddParam(IO_TransUdpConfigSocket, IO_TransUdp_t *, udp);

    UT_GenStub_Execute(IO_TransUdpConfigSocket, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpConfigSocket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpCreateSocket()
 * ----------------------------------------------------
 */
int32 IO_TransUdpCreateSocket(IO_TransUdp_t *udp)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpCreateSocket, int32);

    UT_GenStub_AddParam(IO_TransUdpCreateSocket, IO_TransUdp_t *, udp);

    UT_GenStub_Execute(IO_TransUdpCreateSocket, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpCreateSocket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpInit()
 * ----------------------------------------------------
 */
int32 IO_TransUdpInit(IO_TransUdpConfig_t *config, IO_TransUdp_t *udp)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpInit, int32);

    UT_GenStub_AddParam(IO_TransUdpInit, IO_TransUdpConfig_t *, config);
    UT_GenStub_AddParam(IO_TransUdpInit, IO_TransUdp_t *, udp);

    UT_GenStub_Execute(IO_TransUdpInit, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpInit, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpRcv()
 * ----------------------------------------------------
 */
int32 IO_TransUdpRcv(IO_TransUdp_t *udp, uint8 *buffer, int32 bufSize)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpRcv, int32);

    UT_GenStub_AddParam(IO_TransUdpRcv, IO_TransUdp_t *, udp);
    UT_GenStub_AddParam(IO_TransUdpRcv, uint8 *, buffer);
    UT_GenStub_AddParam(IO_TransUdpRcv, int32, bufSize);

    UT_GenStub_Execute(IO_TransUdpRcv, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpRcv, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpRcvTimeout()
 * ----------------------------------------------------
 */
int32 IO_TransUdpRcvTimeout(IO_TransUdp_t *udp, uint8 *buffer, int32 bufSize, int32 selectTimeout)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpRcvTimeout, int32);

    UT_GenStub_AddParam(IO_TransUdpRcvTimeout, IO_TransUdp_t *, udp);
    UT_GenStub_AddParam(IO_TransUdpRcvTimeout, uint8 *, buffer);
    UT_GenStub_AddParam(IO_TransUdpRcvTimeout, int32, bufSize);
    UT_GenStub_AddParam(IO_TransUdpRcvTimeout, int32, selectTimeout);

    UT_GenStub_Execute(IO_TransUdpRcvTimeout, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpRcvTimeout, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpSetDestAddr()
 * ----------------------------------------------------
 */
int32 IO_TransUdpSetDestAddr(IO_TransUdp_t *udp, char *destAddr, uint16 usPort)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpSetDestAddr, int32);

    UT_GenStub_AddParam(IO_TransUdpSetDestAddr, IO_TransUdp_t *, udp);
    UT_GenStub_AddParam(IO_TransUdpSetDestAddr, char *, destAddr);
    UT_GenStub_AddParam(IO_TransUdpSetDestAddr, uint16, usPort);

    UT_GenStub_Execute(IO_TransUdpSetDestAddr, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpSetDestAddr, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransUdpSnd()
 * ----------------------------------------------------
 */
int32 IO_TransUdpSnd(IO_TransUdp_t *udp, uint8 *msgPtr, int32 size)
{
    UT_GenStub_SetupReturnBuffer(IO_TransUdpSnd, int32);

    UT_GenStub_AddParam(IO_TransUdpSnd, IO_TransUdp_t *, udp);
    UT_GenStub_AddParam(IO_TransUdpSnd, uint8 *, msgPtr);
    UT_GenStub_AddParam(IO_TransUdpSnd, int32, size);

    UT_GenStub_Execute(IO_TransUdpSnd, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransUdpSnd, int32);
}
