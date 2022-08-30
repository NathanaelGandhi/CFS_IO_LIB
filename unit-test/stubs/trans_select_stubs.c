/*******************************************************************************
 * File: trans_select.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 * Purpose:
 *   Provides the functionality to do synchronous I/O multiplexing with
 *   different devices (UDP, RS422) with the use of the POSIX select library.
 *
 * Reference:
 *   http://linux.die.net/man/2/select
 *
 * Notes:
 *   1. Use this library if you want to read on multiple devices simultaneously
 *   2. For output, select will return the first available device. It will not
 *   send over multiple devices, but simply returns the next available device.
 *
 * History:
 *   June 1, 2015  Guy de Carufel
 *    * Created
 *
 ******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in trans_select header
 */

#include "trans_select.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectAddFd()
 * ----------------------------------------------------
 */
int32 IO_TransSelectAddFd(IO_TransSelect_t *pSet, int32 fd)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectAddFd, int32);

    UT_GenStub_AddParam(IO_TransSelectAddFd, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectAddFd, int32, fd);

    UT_GenStub_Execute(IO_TransSelectAddFd, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectAddFd, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectCheckArgs()
 * ----------------------------------------------------
 */
static int32 IO_TransSelectCheckArgs(IO_TransSelect_t *pSet, int32 fd, int32 event)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectCheckArgs, static int32);

    UT_GenStub_AddParam(IO_TransSelectCheckArgs, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectCheckArgs, int32, fd);
    UT_GenStub_AddParam(IO_TransSelectCheckArgs, int32, event);

    UT_GenStub_Execute(IO_TransSelectCheckArgs, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectCheckArgs, static int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectCheckIOArgs()
 * ----------------------------------------------------
 */
static int32 IO_TransSelectCheckIOArgs(IO_TransSelect_t *pSet, int32 timeoutUSec)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectCheckIOArgs, static int32);

    UT_GenStub_AddParam(IO_TransSelectCheckIOArgs, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectCheckIOArgs, int32, timeoutUSec);

    UT_GenStub_Execute(IO_TransSelectCheckIOArgs, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectCheckIOArgs, static int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectClear()
 * ----------------------------------------------------
 */
int32 IO_TransSelectClear(IO_TransSelect_t *pSet)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectClear, int32);

    UT_GenStub_AddParam(IO_TransSelectClear, IO_TransSelect_t *, pSet);

    UT_GenStub_Execute(IO_TransSelectClear, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectClear, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectFdInActive()
 * ----------------------------------------------------
 */
int32 IO_TransSelectFdInActive(IO_TransSelect_t *pSet, int32 fd)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectFdInActive, int32);

    UT_GenStub_AddParam(IO_TransSelectFdInActive, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectFdInActive, int32, fd);

    UT_GenStub_Execute(IO_TransSelectFdInActive, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectFdInActive, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectFdInFull()
 * ----------------------------------------------------
 */
int32 IO_TransSelectFdInFull(IO_TransSelect_t *pSet, int32 fd)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectFdInFull, int32);

    UT_GenStub_AddParam(IO_TransSelectFdInFull, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectFdInFull, int32, fd);

    UT_GenStub_Execute(IO_TransSelectFdInFull, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectFdInFull, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectInput()
 * ----------------------------------------------------
 */
int32 IO_TransSelectInput(IO_TransSelect_t *pSet, int32 timeoutUSec)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectInput, int32);

    UT_GenStub_AddParam(IO_TransSelectInput, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectInput, int32, timeoutUSec);

    UT_GenStub_Execute(IO_TransSelectInput, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectInput, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectOutput()
 * ----------------------------------------------------
 */
int32 IO_TransSelectOutput(IO_TransSelect_t *pSet, int32 timeoutUSec)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectOutput, int32);

    UT_GenStub_AddParam(IO_TransSelectOutput, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectOutput, int32, timeoutUSec);

    UT_GenStub_Execute(IO_TransSelectOutput, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectOutput, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_TransSelectRemoveFd()
 * ----------------------------------------------------
 */
int32 IO_TransSelectRemoveFd(IO_TransSelect_t *pSet, int32 fd)
{
    UT_GenStub_SetupReturnBuffer(IO_TransSelectRemoveFd, int32);

    UT_GenStub_AddParam(IO_TransSelectRemoveFd, IO_TransSelect_t *, pSet);
    UT_GenStub_AddParam(IO_TransSelectRemoveFd, int32, fd);

    UT_GenStub_Execute(IO_TransSelectRemoveFd, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_TransSelectRemoveFd, int32);
}
