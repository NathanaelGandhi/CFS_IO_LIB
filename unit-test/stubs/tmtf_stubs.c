/*******************************************************************************
** File: tmtf.c
**
** Copyright 2017 United States Government as represented by the Administrator
** of the National Aeronautics and Space Administration.  No copyright is
** claimed in the United States under Title 17, U.S. Code.
** All Other Rights Reserved.
**
** Purpose:
**   Provides functionality to handling telemetry space data link protocol
**   (TM SDLP) transfer frames (TF).
**
** History:
**   04/26/15, A. Asp, Odyssey Space Research, LLC
**    * Created
*   10/22/2015, G. de Carufel, Odyssey Space Research, LLC
*    -AddIdlePacket and CRC computation. Revised overflow buffer as queue.
**
*******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in tmtf header
 */

#include "tmtf.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_GenCrcTable()
 * ----------------------------------------------------
 */
void TMTF_GenCrcTable(uint32 polynomial)
{
    UT_GenStub_AddParam(TMTF_GenCrcTable, uint32, polynomial);

    UT_GenStub_Execute(TMTF_GenCrcTable, Basic, NULL);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_GetGlobalVcId()
 * ----------------------------------------------------
 */
int32 TMTF_GetGlobalVcId(TMTF_PriHdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TMTF_GetGlobalVcId, int32);

    UT_GenStub_AddParam(TMTF_GetGlobalVcId, TMTF_PriHdr_t *, tfPtr);

    UT_GenStub_Execute(TMTF_GetGlobalVcId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_GetGlobalVcId, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_GetMcId()
 * ----------------------------------------------------
 */
int32 TMTF_GetMcId(TMTF_PriHdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TMTF_GetMcId, int32);

    UT_GenStub_AddParam(TMTF_GetMcId, TMTF_PriHdr_t *, tfPtr);

    UT_GenStub_Execute(TMTF_GetMcId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_GetMcId, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_IncrVcFrameCount()
 * ----------------------------------------------------
 */
int32 TMTF_IncrVcFrameCount(TMTF_PriHdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TMTF_IncrVcFrameCount, int32);

    UT_GenStub_AddParam(TMTF_IncrVcFrameCount, TMTF_PriHdr_t *, tfPtr);

    UT_GenStub_Execute(TMTF_IncrVcFrameCount, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_IncrVcFrameCount, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_LibInit()
 * ----------------------------------------------------
 */
int32 TMTF_LibInit(void)
{
    UT_GenStub_SetupReturnBuffer(TMTF_LibInit, int32);

    UT_GenStub_Execute(TMTF_LibInit, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_LibInit, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetFirstHdrPtr()
 * ----------------------------------------------------
 */
int32 TMTF_SetFirstHdrPtr(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetFirstHdrPtr, int32);

    UT_GenStub_AddParam(TMTF_SetFirstHdrPtr, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetFirstHdrPtr, uint16, val);

    UT_GenStub_Execute(TMTF_SetFirstHdrPtr, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetFirstHdrPtr, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetMcFrameCount()
 * ----------------------------------------------------
 */
int32 TMTF_SetMcFrameCount(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetMcFrameCount, int32);

    UT_GenStub_AddParam(TMTF_SetMcFrameCount, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetMcFrameCount, uint16, val);

    UT_GenStub_Execute(TMTF_SetMcFrameCount, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetMcFrameCount, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetOcf()
 * ----------------------------------------------------
 */
int32 TMTF_SetOcf(TMTF_PriHdr_t *tfPtr, uint8 *data, uint16 offset)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetOcf, int32);

    UT_GenStub_AddParam(TMTF_SetOcf, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetOcf, uint8 *, data);
    UT_GenStub_AddParam(TMTF_SetOcf, uint16, offset);

    UT_GenStub_Execute(TMTF_SetOcf, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetOcf, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetOcfFlag()
 * ----------------------------------------------------
 */
int32 TMTF_SetOcfFlag(TMTF_PriHdr_t *tfPtr, bool val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetOcfFlag, int32);

    UT_GenStub_AddParam(TMTF_SetOcfFlag, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetOcfFlag, bool, val);

    UT_GenStub_Execute(TMTF_SetOcfFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetOcfFlag, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetPacketOrderFlag()
 * ----------------------------------------------------
 */
int32 TMTF_SetPacketOrderFlag(TMTF_PriHdr_t *tfPtr, bool val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetPacketOrderFlag, int32);

    UT_GenStub_AddParam(TMTF_SetPacketOrderFlag, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetPacketOrderFlag, bool, val);

    UT_GenStub_Execute(TMTF_SetPacketOrderFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetPacketOrderFlag, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetScId()
 * ----------------------------------------------------
 */
int32 TMTF_SetScId(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetScId, int32);

    UT_GenStub_AddParam(TMTF_SetScId, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetScId, uint16, val);

    UT_GenStub_Execute(TMTF_SetScId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetScId, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetSecHdrData()
 * ----------------------------------------------------
 */
int32 TMTF_SetSecHdrData(TMTF_PriHdr_t *tfPtr, uint8 *data, uint8 length)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetSecHdrData, int32);

    UT_GenStub_AddParam(TMTF_SetSecHdrData, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetSecHdrData, uint8 *, data);
    UT_GenStub_AddParam(TMTF_SetSecHdrData, uint8, length);

    UT_GenStub_Execute(TMTF_SetSecHdrData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetSecHdrData, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetSecHdrFlag()
 * ----------------------------------------------------
 */
int32 TMTF_SetSecHdrFlag(TMTF_PriHdr_t *tfPtr, bool val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetSecHdrFlag, int32);

    UT_GenStub_AddParam(TMTF_SetSecHdrFlag, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetSecHdrFlag, bool, val);

    UT_GenStub_Execute(TMTF_SetSecHdrFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetSecHdrFlag, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetSecHdrLength()
 * ----------------------------------------------------
 */
int32 TMTF_SetSecHdrLength(TMTF_PriHdr_t *tfPtr, uint8 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetSecHdrLength, int32);

    UT_GenStub_AddParam(TMTF_SetSecHdrLength, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetSecHdrLength, uint8, val);

    UT_GenStub_Execute(TMTF_SetSecHdrLength, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetSecHdrLength, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetSegLengthId()
 * ----------------------------------------------------
 */
int32 TMTF_SetSegLengthId(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetSegLengthId, int32);

    UT_GenStub_AddParam(TMTF_SetSegLengthId, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetSegLengthId, uint16, val);

    UT_GenStub_Execute(TMTF_SetSegLengthId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetSegLengthId, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetSyncFlag()
 * ----------------------------------------------------
 */
int32 TMTF_SetSyncFlag(TMTF_PriHdr_t *tfPtr, bool val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetSyncFlag, int32);

    UT_GenStub_AddParam(TMTF_SetSyncFlag, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetSyncFlag, bool, val);

    UT_GenStub_Execute(TMTF_SetSyncFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetSyncFlag, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetVcFrameCount()
 * ----------------------------------------------------
 */
int32 TMTF_SetVcFrameCount(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetVcFrameCount, int32);

    UT_GenStub_AddParam(TMTF_SetVcFrameCount, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetVcFrameCount, uint16, val);

    UT_GenStub_Execute(TMTF_SetVcFrameCount, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetVcFrameCount, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetVcId()
 * ----------------------------------------------------
 */
int32 TMTF_SetVcId(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetVcId, int32);

    UT_GenStub_AddParam(TMTF_SetVcId, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetVcId, uint16, val);

    UT_GenStub_Execute(TMTF_SetVcId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetVcId, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_SetVersion()
 * ----------------------------------------------------
 */
int32 TMTF_SetVersion(TMTF_PriHdr_t *tfPtr, uint16 val)
{
    UT_GenStub_SetupReturnBuffer(TMTF_SetVersion, int32);

    UT_GenStub_AddParam(TMTF_SetVersion, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_SetVersion, uint16, val);

    UT_GenStub_Execute(TMTF_SetVersion, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_SetVersion, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TMTF_UpdateErrCtrlField()
 * ----------------------------------------------------
 */
int32 TMTF_UpdateErrCtrlField(TMTF_PriHdr_t *tfPtr, uint16 offset)
{
    UT_GenStub_SetupReturnBuffer(TMTF_UpdateErrCtrlField, int32);

    UT_GenStub_AddParam(TMTF_UpdateErrCtrlField, TMTF_PriHdr_t *, tfPtr);
    UT_GenStub_AddParam(TMTF_UpdateErrCtrlField, uint16, offset);

    UT_GenStub_Execute(TMTF_UpdateErrCtrlField, Basic, NULL);

    return UT_GenStub_GetReturnValue(TMTF_UpdateErrCtrlField, int32);
}
