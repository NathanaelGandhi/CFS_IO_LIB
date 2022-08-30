/******************************************************************************/
/** \file  tm_sdlp.c
 *
 *   Copyright 2017 United States Government as represented by the Administrator
 *   of the National Aeronautics and Space Administration.  No copyright is
 *   claimed in the United States under Title 17, U.S. Code.
 *   All Other Rights Reserved.
 *
 *   \brief Function Definitions for TM_SDLP
 *
 *   \par
 *     Provides Telemetry Space Data Link Protocol (TM_SDLP) services
 *
 *   \par Modification History:
 *     - 2015-04-26 | Alan A. Asp | OSR | Code Started (originally in tmtf.c)
 *     - 2015-10-22 | Guy de Carufel | OSR | Migrated from tmtf.c.
 *           Major revision: Comments, Structs, idle data, overflow, API.
 *******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in tm_sdlp header
 */

#include "tm_sdlp.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_AddData()
 * ----------------------------------------------------
 */
static int32 TM_SDLP_AddData(TM_SDLP_FrameInfo_t *pFrameInfo, uint8 *pData, uint16 dataLength, bool isPacket)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_AddData, int32);

    UT_GenStub_AddParam(TM_SDLP_AddData, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_AddData, uint8 *, pData);
    UT_GenStub_AddParam(TM_SDLP_AddData, uint16, dataLength);
    UT_GenStub_AddParam(TM_SDLP_AddData, bool, isPacket);

    UT_GenStub_Execute(TM_SDLP_AddData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_AddData, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_AddIdlePacket()
 * ----------------------------------------------------
 */
int32 TM_SDLP_AddIdlePacket(TM_SDLP_FrameInfo_t *pFrameInfo, CFE_SB_Buffer_t *pIdlePacket)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_AddIdlePacket, int32);

    UT_GenStub_AddParam(TM_SDLP_AddIdlePacket, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_AddIdlePacket, CFE_SB_Buffer_t *, pIdlePacket);

    UT_GenStub_Execute(TM_SDLP_AddIdlePacket, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_AddIdlePacket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_AddPacket()
 * ----------------------------------------------------
 */
int32 TM_SDLP_AddPacket(TM_SDLP_FrameInfo_t *pFrameInfo, const CFE_SB_Buffer_t *pPacket)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_AddPacket, int32);

    UT_GenStub_AddParam(TM_SDLP_AddPacket, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_AddPacket, const CFE_SB_Buffer_t *, pPacket);

    UT_GenStub_Execute(TM_SDLP_AddPacket, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_AddPacket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_AddVcaData()
 * ----------------------------------------------------
 */
int32 TM_SDLP_AddVcaData(TM_SDLP_FrameInfo_t *pFrameInfo, uint8 *pData, uint16 dataLength)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_AddVcaData, int32);

    UT_GenStub_AddParam(TM_SDLP_AddVcaData, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_AddVcaData, uint8 *, pData);
    UT_GenStub_AddParam(TM_SDLP_AddVcaData, uint16, dataLength);

    UT_GenStub_Execute(TM_SDLP_AddVcaData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_AddVcaData, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_CompleteFrame()
 * ----------------------------------------------------
 */
int32 TM_SDLP_CompleteFrame(TM_SDLP_FrameInfo_t *pFrameInfo, uint8 *pMcFrameCnt, uint8 *pOcf)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_CompleteFrame, int32);

    UT_GenStub_AddParam(TM_SDLP_CompleteFrame, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_CompleteFrame, uint8 *, pMcFrameCnt);
    UT_GenStub_AddParam(TM_SDLP_CompleteFrame, uint8 *, pOcf);

    UT_GenStub_Execute(TM_SDLP_CompleteFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_CompleteFrame, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_CopyFromOverflow()
 * ----------------------------------------------------
 */
static int32 TM_SDLP_CopyFromOverflow(TM_SDLP_FrameInfo_t *pFrameInfo)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_CopyFromOverflow, int32);

    UT_GenStub_AddParam(TM_SDLP_CopyFromOverflow, TM_SDLP_FrameInfo_t *, pFrameInfo);

    UT_GenStub_Execute(TM_SDLP_CopyFromOverflow, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_CopyFromOverflow, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_CopyToOverflow()
 * ----------------------------------------------------
 */
static int32 TM_SDLP_CopyToOverflow(TM_SDLP_OverflowInfo_t *pOverflow, uint8 *data, uint16 length, bool isPartial)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_CopyToOverflow, int32);

    UT_GenStub_AddParam(TM_SDLP_CopyToOverflow, TM_SDLP_OverflowInfo_t *, pOverflow);
    UT_GenStub_AddParam(TM_SDLP_CopyToOverflow, uint8 *, data);
    UT_GenStub_AddParam(TM_SDLP_CopyToOverflow, uint16, length);
    UT_GenStub_AddParam(TM_SDLP_CopyToOverflow, bool, isPartial);

    UT_GenStub_Execute(TM_SDLP_CopyToOverflow, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_CopyToOverflow, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_FrameHasData()
 * ----------------------------------------------------
 */
int32 TM_SDLP_FrameHasData(TM_SDLP_FrameInfo_t *pFrameInfo)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_FrameHasData, int32);

    UT_GenStub_AddParam(TM_SDLP_FrameHasData, TM_SDLP_FrameInfo_t *, pFrameInfo);

    UT_GenStub_Execute(TM_SDLP_FrameHasData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_FrameHasData, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_InitChannel()
 * ----------------------------------------------------
 */
int32 TM_SDLP_InitChannel(TM_SDLP_FrameInfo_t *pFrameInfo, uint8 *pTfBuffer, uint8 *pOverflowBuffer,
                          TM_SDLP_GlobalConfig_t *pGlobalConfig, TM_SDLP_ChannelConfig_t *pChannelConfig)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_InitChannel, int32);

    UT_GenStub_AddParam(TM_SDLP_InitChannel, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_InitChannel, uint8 *, pTfBuffer);
    UT_GenStub_AddParam(TM_SDLP_InitChannel, uint8 *, pOverflowBuffer);
    UT_GenStub_AddParam(TM_SDLP_InitChannel, TM_SDLP_GlobalConfig_t *, pGlobalConfig);
    UT_GenStub_AddParam(TM_SDLP_InitChannel, TM_SDLP_ChannelConfig_t *, pChannelConfig);

    UT_GenStub_Execute(TM_SDLP_InitChannel, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_InitChannel, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_InitIdlePacket()
 * ----------------------------------------------------
 */
int32 TM_SDLP_InitIdlePacket(CFE_SB_Buffer_t *pIdlePacket, uint8 *pIdlePattern, uint16 bufferLength,
                             uint32 patternBitLength)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_InitIdlePacket, int32);

    UT_GenStub_AddParam(TM_SDLP_InitIdlePacket, CFE_SB_Buffer_t *, pIdlePacket);
    UT_GenStub_AddParam(TM_SDLP_InitIdlePacket, uint8 *, pIdlePattern);
    UT_GenStub_AddParam(TM_SDLP_InitIdlePacket, uint16, bufferLength);
    UT_GenStub_AddParam(TM_SDLP_InitIdlePacket, uint32, patternBitLength);

    UT_GenStub_Execute(TM_SDLP_InitIdlePacket, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_InitIdlePacket, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_SetOidFrame()
 * ----------------------------------------------------
 */
int32 TM_SDLP_SetOidFrame(TM_SDLP_FrameInfo_t *pFrameInfo, CFE_SB_Buffer_t *pIdlePacket)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_SetOidFrame, int32);

    UT_GenStub_AddParam(TM_SDLP_SetOidFrame, TM_SDLP_FrameInfo_t *, pFrameInfo);
    UT_GenStub_AddParam(TM_SDLP_SetOidFrame, CFE_SB_Buffer_t *, pIdlePacket);

    UT_GenStub_Execute(TM_SDLP_SetOidFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_SetOidFrame, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TM_SDLP_StartFrame()
 * ----------------------------------------------------
 */
int32 TM_SDLP_StartFrame(TM_SDLP_FrameInfo_t *pFrameInfo)
{
    UT_GenStub_SetupReturnBuffer(TM_SDLP_StartFrame, int32);

    UT_GenStub_AddParam(TM_SDLP_StartFrame, TM_SDLP_FrameInfo_t *, pFrameInfo);

    UT_GenStub_Execute(TM_SDLP_StartFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(TM_SDLP_StartFrame, int32);
}
