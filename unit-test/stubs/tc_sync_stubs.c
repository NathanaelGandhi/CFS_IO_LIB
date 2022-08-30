/******************************************************************************/
/** \file  tc_sync.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 *   \brief Provides the TC Channel Synchronization service.
 *
 *   \par Modification History:
 *     - 2015-12-08 | Guy de Carufel | OSR | Code Started
 *******************************************************************************/
#include <stdlib.h>

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in tc_sync header
 */

#include "tc_sync.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for TC_SYNC_CheckStartSeq()
 * ----------------------------------------------------
 */
int32 TC_SYNC_CheckStartSeq(uint8 *pSeq, uint16 *pCltuOffset)
{
    UT_GenStub_SetupReturnBuffer(TC_SYNC_CheckStartSeq, int32);

    UT_GenStub_AddParam(TC_SYNC_CheckStartSeq, uint8 *, pSeq);
    UT_GenStub_AddParam(TC_SYNC_CheckStartSeq, uint16 *, pCltuOffset);

    UT_GenStub_Execute(TC_SYNC_CheckStartSeq, Basic, NULL);

    return UT_GenStub_GetReturnValue(TC_SYNC_CheckStartSeq, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TC_SYNC_DeRandomizeFrame()
 * ----------------------------------------------------
 */
int32 TC_SYNC_DeRandomizeFrame(uint8 *pFrame, uint16 frameSize)
{
    UT_GenStub_SetupReturnBuffer(TC_SYNC_DeRandomizeFrame, int32);

    UT_GenStub_AddParam(TC_SYNC_DeRandomizeFrame, uint8 *, pFrame);
    UT_GenStub_AddParam(TC_SYNC_DeRandomizeFrame, uint16, frameSize);

    UT_GenStub_Execute(TC_SYNC_DeRandomizeFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(TC_SYNC_DeRandomizeFrame, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TC_SYNC_GetCodeBlockData()
 * ----------------------------------------------------
 */
int32 TC_SYNC_GetCodeBlockData(uint8 *pTfBuff, uint8 *pCodeBlock, uint16 *pTfOffset, uint16 *pCltuOffset,
                               uint16 tfBuffSize, uint16 cltuMaxLength)
{
    UT_GenStub_SetupReturnBuffer(TC_SYNC_GetCodeBlockData, int32);

    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint8 *, pTfBuff);
    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint8 *, pCodeBlock);
    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint16 *, pTfOffset);
    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint16 *, pCltuOffset);
    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint16, tfBuffSize);
    UT_GenStub_AddParam(TC_SYNC_GetCodeBlockData, uint16, cltuMaxLength);

    UT_GenStub_Execute(TC_SYNC_GetCodeBlockData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TC_SYNC_GetCodeBlockData, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TC_SYNC_GetTransferFrame()
 * ----------------------------------------------------
 */
int32 TC_SYNC_GetTransferFrame(uint8 *pTfBuff, uint8 *pCltu, uint16 tfBuffSize, uint16 cltuLength, bool derandomize)
{
    UT_GenStub_SetupReturnBuffer(TC_SYNC_GetTransferFrame, int32);

    UT_GenStub_AddParam(TC_SYNC_GetTransferFrame, uint8 *, pTfBuff);
    UT_GenStub_AddParam(TC_SYNC_GetTransferFrame, uint8 *, pCltu);
    UT_GenStub_AddParam(TC_SYNC_GetTransferFrame, uint16, tfBuffSize);
    UT_GenStub_AddParam(TC_SYNC_GetTransferFrame, uint16, cltuLength);
    UT_GenStub_AddParam(TC_SYNC_GetTransferFrame, bool, derandomize);

    UT_GenStub_Execute(TC_SYNC_GetTransferFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(TC_SYNC_GetTransferFrame, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TC_SYNC_LibInit()
 * ----------------------------------------------------
 */
int32 TC_SYNC_LibInit(void)
{
    UT_GenStub_SetupReturnBuffer(TC_SYNC_LibInit, int32);

    UT_GenStub_Execute(TC_SYNC_LibInit, Basic, NULL);

    return UT_GenStub_GetReturnValue(TC_SYNC_LibInit, int32);
}
