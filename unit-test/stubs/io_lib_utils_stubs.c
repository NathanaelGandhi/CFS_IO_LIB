/******************************************************************************/
/** \file  io_lib_utils.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 *   \brief Function Definitions of IO Library utilities
 *
 *   \par
 *     Provides common utilities used by IO libraries.
 *
 *   \par Limitations, Assumptions, External Events, and Notes:
 *
 *   \par Modification History:
 *     - 2015-12-08 | Guy de Carufel | OSR | Code Started
 *******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in io_lib_utils header
 */

#include "io_lib_utils.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for IO_LIB_UTIL_GenPseudoRandomSeq()
 * ----------------------------------------------------
 */
int32 IO_LIB_UTIL_GenPseudoRandomSeq(uint8 *pSeqBuff, uint8 poly, uint8 seed)
{
    UT_GenStub_SetupReturnBuffer(IO_LIB_UTIL_GenPseudoRandomSeq, int32);

    UT_GenStub_AddParam(IO_LIB_UTIL_GenPseudoRandomSeq, uint8 *, pSeqBuff);
    UT_GenStub_AddParam(IO_LIB_UTIL_GenPseudoRandomSeq, uint8, poly);
    UT_GenStub_AddParam(IO_LIB_UTIL_GenPseudoRandomSeq, uint8, seed);

    UT_GenStub_Execute(IO_LIB_UTIL_GenPseudoRandomSeq, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_LIB_UTIL_GenPseudoRandomSeq, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for IO_LIB_UTIL_PseudoRandomize()
 * ----------------------------------------------------
 */
int32 IO_LIB_UTIL_PseudoRandomize(uint8 *pBuff, uint16 buffSize, uint8 *pPrSeq)
{
    UT_GenStub_SetupReturnBuffer(IO_LIB_UTIL_PseudoRandomize, int32);

    UT_GenStub_AddParam(IO_LIB_UTIL_PseudoRandomize, uint8 *, pBuff);
    UT_GenStub_AddParam(IO_LIB_UTIL_PseudoRandomize, uint16, buffSize);
    UT_GenStub_AddParam(IO_LIB_UTIL_PseudoRandomize, uint8 *, pPrSeq);

    UT_GenStub_Execute(IO_LIB_UTIL_PseudoRandomize, Basic, NULL);

    return UT_GenStub_GetReturnValue(IO_LIB_UTIL_PseudoRandomize, int32);
}
