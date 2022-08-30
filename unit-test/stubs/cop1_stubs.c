/*******************************************************************************
 * File: cop1.c
 *
 * Copyright 2017 United States Government as represented by the Administrator
 * of the National Aeronautics and Space Administration.  No copyright is
 * claimed in the United States under Title 17, U.S. Code.
 * All Other Rights Reserved.
 *
 * Purpose:
 *   Provide the functionality for the receiver for the Communications Operation
 *   Procedure-1 (COP-1), i.e. the Frame Acceptance and Reporting Mechanism-1
 *   (FARM-1).
 *
 * Reference:
 *   -_Communications Operation Procedure-1 Recommended Standard_, CCSDS 232.1-B-2,
 *    September, 2010
 *   -_TC Space Data Link Protocol Recommended Standard_, CCSDS 232.0-B-2, September,
 *    2010
 *
 * Notes:
 *   -The COP1_ProcessFrame function is the main entry point for handling Telecommand
 *    Transfer Frames (TF).  A 'Higher Procedure', i.e. a function which calls
 *    COP1_ProcessFrame, shall indicate the availability of a buffer large enough
 *    to hold the TF by passing in a non-null destination buffer.  To signal that
 *    there is not enough space available at the moment, the calling function
 *    shall pass a NULL destination buffer pointer.  The Communication Link
 *    Control Word (CLCW) will be updated to the 'Wait' state as necessary based
 *    on this signal mechanism.
 *
 *   -Many of the functions to process transfer frames reuse code from Morpheus
 *
 *   -The use of 'bool ' values for setters/getters assumes the underlying value
 *    for true = 1, and the underlying value for false = 0.  If this were not so,
 *    the CLCW flags would not be set or returned with the expected values.
 *
 * History:
 *   03/16/2015  Alan Asp, Odyssey Space Research, LLC
 *    * Created
 *
 ******************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in cop1 header
 */

#include "cop1.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_AcceptTf()
 * ----------------------------------------------------
 */
static int32 COP1_AcceptTf(TCTF_Hdr_t *tfPtr, COP1_Clcw_t *clcwPtr, uint8 *toBuffer,
                           TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(COP1_AcceptTf, static int32);

    UT_GenStub_AddParam(COP1_AcceptTf, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(COP1_AcceptTf, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_AcceptTf, uint8 *, toBuffer);
    UT_GenStub_AddParam(COP1_AcceptTf, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(COP1_AcceptTf, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_AcceptTf, static int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_BypassTf()
 * ----------------------------------------------------
 */
static int32 COP1_BypassTf(TCTF_Hdr_t *tfPtr, COP1_Clcw_t *clcwPtr, uint8 *toBuffer,
                           TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(COP1_BypassTf, static int32);

    UT_GenStub_AddParam(COP1_BypassTf, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(COP1_BypassTf, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_BypassTf, uint8 *, toBuffer);
    UT_GenStub_AddParam(COP1_BypassTf, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(COP1_BypassTf, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_BypassTf, static int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_CheckTfSequence()
 * ----------------------------------------------------
 */
static uint16 COP1_CheckTfSequence(uint8 seqNum, uint8 expSeqNum)
{
    UT_GenStub_SetupReturnBuffer(COP1_CheckTfSequence, static uint16);

    UT_GenStub_AddParam(COP1_CheckTfSequence, uint8, seqNum);
    UT_GenStub_AddParam(COP1_CheckTfSequence, uint8, expSeqNum);

    UT_GenStub_Execute(COP1_CheckTfSequence, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_CheckTfSequence, static uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwCopEffect()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwCopEffect(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwCopEffect, uint16);

    UT_GenStub_AddParam(COP1_GetClcwCopEffect, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwCopEffect, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwCopEffect, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwCtrlWordType()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwCtrlWordType(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwCtrlWordType, uint16);

    UT_GenStub_AddParam(COP1_GetClcwCtrlWordType, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwCtrlWordType, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwCtrlWordType, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwFarmbCtr()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwFarmbCtr(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwFarmbCtr, uint16);

    UT_GenStub_AddParam(COP1_GetClcwFarmbCtr, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwFarmbCtr, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwFarmbCtr, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwLockout()
 * ----------------------------------------------------
 */
bool COP1_GetClcwLockout(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwLockout, bool);

    UT_GenStub_AddParam(COP1_GetClcwLockout, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwLockout, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwLockout, bool);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwNoBitlock()
 * ----------------------------------------------------
 */
bool COP1_GetClcwNoBitlock(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwNoBitlock, bool);

    UT_GenStub_AddParam(COP1_GetClcwNoBitlock, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwNoBitlock, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwNoBitlock, bool);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwNoRf()
 * ----------------------------------------------------
 */
bool COP1_GetClcwNoRf(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwNoRf, bool);

    UT_GenStub_AddParam(COP1_GetClcwNoRf, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwNoRf, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwNoRf, bool);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwReport()
 * ----------------------------------------------------
 */
uint8 COP1_GetClcwReport(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwReport, uint8);

    UT_GenStub_AddParam(COP1_GetClcwReport, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwReport, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwReport, uint8);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwRetransmit()
 * ----------------------------------------------------
 */
bool COP1_GetClcwRetransmit(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwRetransmit, bool);

    UT_GenStub_AddParam(COP1_GetClcwRetransmit, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwRetransmit, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwRetransmit, bool);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwStatus()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwStatus(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwStatus, uint16);

    UT_GenStub_AddParam(COP1_GetClcwStatus, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwStatus, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwStatus, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwVcId()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwVcId(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwVcId, uint16);

    UT_GenStub_AddParam(COP1_GetClcwVcId, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwVcId, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwVcId, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwVersion()
 * ----------------------------------------------------
 */
uint16 COP1_GetClcwVersion(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwVersion, uint16);

    UT_GenStub_AddParam(COP1_GetClcwVersion, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwVersion, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwVersion, uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetClcwWait()
 * ----------------------------------------------------
 */
bool COP1_GetClcwWait(COP1_Clcw_t *clcwPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetClcwWait, bool);

    UT_GenStub_AddParam(COP1_GetClcwWait, COP1_Clcw_t *, clcwPtr);

    UT_GenStub_Execute(COP1_GetClcwWait, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetClcwWait, bool);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetTfCommand()
 * ----------------------------------------------------
 */
static uint16 COP1_GetTfCommand(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetTfCommand, static uint16);

    UT_GenStub_AddParam(COP1_GetTfCommand, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(COP1_GetTfCommand, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetTfCommand, static uint16);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_GetTfCommandedVr()
 * ----------------------------------------------------
 */
static uint8 COP1_GetTfCommandedVr(TCTF_Hdr_t *tfPtr)
{
    UT_GenStub_SetupReturnBuffer(COP1_GetTfCommandedVr, static uint8);

    UT_GenStub_AddParam(COP1_GetTfCommandedVr, TCTF_Hdr_t *, tfPtr);

    UT_GenStub_Execute(COP1_GetTfCommandedVr, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_GetTfCommandedVr, static uint8);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_InitClcw()
 * ----------------------------------------------------
 */
int32 COP1_InitClcw(COP1_Clcw_t *clcwPtr, uint16 vcId)
{
    UT_GenStub_SetupReturnBuffer(COP1_InitClcw, int32);

    UT_GenStub_AddParam(COP1_InitClcw, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_InitClcw, uint16, vcId);

    UT_GenStub_Execute(COP1_InitClcw, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_InitClcw, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_ProcessFrame()
 * ----------------------------------------------------
 */
int32 COP1_ProcessFrame(uint8 *toBuffer, COP1_Clcw_t *clcwPtr, TCTF_Hdr_t *tfPtr, TCTF_ChannelService_t *channelService)
{
    UT_GenStub_SetupReturnBuffer(COP1_ProcessFrame, int32);

    UT_GenStub_AddParam(COP1_ProcessFrame, uint8 *, toBuffer);
    UT_GenStub_AddParam(COP1_ProcessFrame, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_ProcessFrame, TCTF_Hdr_t *, tfPtr);
    UT_GenStub_AddParam(COP1_ProcessFrame, TCTF_ChannelService_t *, channelService);

    UT_GenStub_Execute(COP1_ProcessFrame, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_ProcessFrame, int32);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_SetClcwNoBitlock()
 * ----------------------------------------------------
 */
void COP1_SetClcwNoBitlock(COP1_Clcw_t *clcwPtr, bool value)
{
    UT_GenStub_AddParam(COP1_SetClcwNoBitlock, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_SetClcwNoBitlock, bool, value);

    UT_GenStub_Execute(COP1_SetClcwNoBitlock, Basic, NULL);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_SetClcwNoRf()
 * ----------------------------------------------------
 */
void COP1_SetClcwNoRf(COP1_Clcw_t *clcwPtr, bool value)
{
    UT_GenStub_AddParam(COP1_SetClcwNoRf, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_SetClcwNoRf, bool, value);

    UT_GenStub_Execute(COP1_SetClcwNoRf, Basic, NULL);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_SetClcwStatus()
 * ----------------------------------------------------
 */
void COP1_SetClcwStatus(COP1_Clcw_t *clcwPtr, uint16 value)
{
    UT_GenStub_AddParam(COP1_SetClcwStatus, COP1_Clcw_t *, clcwPtr);
    UT_GenStub_AddParam(COP1_SetClcwStatus, uint16, value);

    UT_GenStub_Execute(COP1_SetClcwStatus, Basic, NULL);
}

/*
 * ----------------------------------------------------
 * Generated stub function for COP1_isInWrappedRange()
 * ----------------------------------------------------
 */
static bool COP1_isInWrappedRange(uint8 lower, uint8 value, uint8 upper)
{
    UT_GenStub_SetupReturnBuffer(COP1_isInWrappedRange, static bool);

    UT_GenStub_AddParam(COP1_isInWrappedRange, uint8, lower);
    UT_GenStub_AddParam(COP1_isInWrappedRange, uint8, value);
    UT_GenStub_AddParam(COP1_isInWrappedRange, uint8, upper);

    UT_GenStub_Execute(COP1_isInWrappedRange, Basic, NULL);

    return UT_GenStub_GetReturnValue(COP1_isInWrappedRange, static bool);
}
