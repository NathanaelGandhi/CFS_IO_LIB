/*******************************************************************************
** File: tc_transfer_frame.c
**
** Copyright 2017 United States Government as represented by the Administrator
** of the National Aeronautics and Space Administration.  No copyright is
** claimed in the United States under Title 17, U.S. Code.
** All Other Rights Reserved.
**
** Purpose:
**   Provides functionality to handling telecommand space data link protocol
**   (TC SDLP) transfer frames (TF).
**
** History:
**   04/02/15, A. Asp, Odyssey Space Research, LLC
**    * Created
**
*******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in tctf header
 */

#include "tctf.h"
/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_CopyData()
 * ----------------------------------------------------
 */
uint16 TCTF_CopyData(uint8 *toBuffer, TCTF_Hdr_t *tfPtr, TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(TCTF_CopyData, uint16);

    UT_GenStub_AddParam(TCTF_CopyData, uint8 *, toBuffer);
    UT_GenStub_AddParam(TCTF_CopyData, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(TCTF_CopyData, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(TCTF_CopyData, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_CopyData, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetBypassFlag()
 * ----------------------------------------------------
 */
uint16 TCTF_GetBypassFlag(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetBypassFlag, uint16);

    UT_GenStub_AddParam(TCTF_GetBypassFlag, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetBypassFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetBypassFlag, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetCtlCmdFlag()
 * ----------------------------------------------------
 */
uint16 TCTF_GetCtlCmdFlag(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetCtlCmdFlag, uint16);

    UT_GenStub_AddParam(TCTF_GetCtlCmdFlag, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetCtlCmdFlag, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetCtlCmdFlag, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetLength()
 * ----------------------------------------------------
 */
uint16 TCTF_GetLength(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetLength, uint16);

    UT_GenStub_AddParam(TCTF_GetLength, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetLength, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetLength, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetPayloadLength()
 * ----------------------------------------------------
 */
uint16 TCTF_GetPayloadLength(TCTF_Hdr_t *tfPtr, TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetPayloadLength, uint16);

    UT_GenStub_AddParam(TCTF_GetPayloadLength, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(TCTF_GetPayloadLength, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(TCTF_GetPayloadLength, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetPayloadLength, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetPayloadOffset()
 * ----------------------------------------------------
 */
static uint16 TCTF_GetPayloadOffset(TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetPayloadOffset, uint16);

    UT_GenStub_AddParam(TCTF_GetPayloadOffset, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(TCTF_GetPayloadOffset, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetPayloadOffset, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetScId()
 * ----------------------------------------------------
 */
uint16 TCTF_GetScId(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetScId, uint16);

    UT_GenStub_AddParam(TCTF_GetScId, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetScId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetScId, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetSegHdrMapId()
 * ----------------------------------------------------
 */
uint16 TCTF_GetSegHdrMapId(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetSegHdrMapId, uint16);

    UT_GenStub_AddParam(TCTF_GetSegHdrMapId, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetSegHdrMapId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetSegHdrMapId, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetSegHdrSeqFlags()
 * ----------------------------------------------------
 */
uint16 TCTF_GetSegHdrSeqFlags(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetSegHdrSeqFlags, uint16);

    UT_GenStub_AddParam(TCTF_GetSegHdrSeqFlags, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetSegHdrSeqFlags, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetSegHdrSeqFlags, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetSeqNum()
 * ----------------------------------------------------
 */
uint8 TCTF_GetSeqNum(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetSeqNum, uint8);

    UT_GenStub_AddParam(TCTF_GetSeqNum, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetSeqNum, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetSeqNum, uint8);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetVcId()
 * ----------------------------------------------------
 */
uint16 TCTF_GetVcId(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetVcId, uint16);

    UT_GenStub_AddParam(TCTF_GetVcId, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetVcId, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetVcId, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_GetVersion()
 * ----------------------------------------------------
 */
uint16 TCTF_GetVersion(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(TCTF_GetVersion, uint16);

    UT_GenStub_AddParam(TCTF_GetVersion, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(TCTF_GetVersion, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_GetVersion, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for TCTF_IsValidTf()
 * ----------------------------------------------------
 */
bool TCTF_IsValidTf(TCTF_Hdr_t *tfPtr, TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(TCTF_IsValidTf, bool);

    UT_GenStub_AddParam(TCTF_IsValidTf, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(TCTF_IsValidTf, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(TCTF_IsValidTf, Basic, NULL);

    return UT_GenStub_GetReturnValue(TCTF_IsValidTf, bool);
}
