/******************************************************************************/
/** \file  tm_sync.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 *   \brief Provides the TM Channel Synchronization service.
 *
 *   \par Modification History:
 *     - 2015-10-29 | Guy de Carufel | OSR | Code Started
 *******************************************************************************/
#include <stdlib.h>

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in tm_sync header
 */

#include "tm_sync.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SYNC_LibInit()
 * ----------------------------------------------------
 */
int32 TM_SYNC_LibInit(void)
{
    UT_GenStub_SetupReturnBuffer(TM_SYNC_LibInit, int32);

    UT_GenStub_Execute(TM_SYNC_LibInit, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SYNC_LibInit, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SYNC_PseudoRandomize()
 * ----------------------------------------------------
 */
int32 TM_SYNC_PseudoRandomize(uint8 *pFrame, uint16 frameSize)
{
    UT_GenStub_SetupReturnBuffer(TM_SYNC_PseudoRandomize, int32);

    UT_GenStub_AddParam(TM_SYNC_PseudoRandomize, uint8 *, pFrame);
    UT_GenStub_AddParam(TM_SYNC_PseudoRandomize, uint16, frameSize);

    UT_GenStub_Execute(TM_SYNC_PseudoRandomize, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SYNC_PseudoRandomize, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SYNC_Synchronize()
 * ----------------------------------------------------
 */
int32 TM_SYNC_Synchronize(uint8 *pBuff, char *asmStr, uint8 asmSize, uint16 frameSize, bool randomize)
{
    UT_GenStub_SetupReturnBuffer(TM_SYNC_Synchronize, int32);

    UT_GenStub_AddParam(TM_SYNC_Synchronize, uint8 *, pBuff);
    UT_GenStub_AddParam(TM_SYNC_Synchronize, char *, asmStr);
    UT_GenStub_AddParam(TM_SYNC_Synchronize, uint8, asmSize);
    UT_GenStub_AddParam(TM_SYNC_Synchronize, uint16, frameSize);
    UT_GenStub_AddParam(TM_SYNC_Synchronize, bool, randomize);

    UT_GenStub_Execute(TM_SYNC_Synchronize, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SYNC_Synchronize, int32);
}
