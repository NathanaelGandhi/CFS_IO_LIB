/*************************************************************************
 * File: io_lib_init.c
 **
 ** Copyright 2017 United States Government as represented by the Administrator
 ** of the National Aeronautics and Space Administration.  No copyright is
 ** claimed in the United States under Title 17, U.S. Code.
 ** All Other Rights Reserved.
 **
 *************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in io_lib_init header
 */

#include "io_lib.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for IO_LibInit()
 * ----------------------------------------------------
 */
int32 IO_LibInit(void)
{
    UT_GenStub_SetupReturnBuffer(IO_LibInit, int32);

    UT_GenStub_Execute(IO_LibInit, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_LibInit, int32);
}