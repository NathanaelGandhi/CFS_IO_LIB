#include "tctf_test_utils.h"

/*
 * TCTF_Setup
 *
 * Purpose:
 *   Called by the unit test tool to set up the app prior to each test
 */
void TCTF_Test_Setup(void)
{
    // Ut_OSAPI_Reset();
    // Ut_CFE_SB_Reset();
    // Ut_CFE_ES_Reset();
    // Ut_CFE_EVS_Reset();
    // Ut_CFE_TBL_Reset();

    // memset(testToBuf, '\0', sizeof(testToBuf));
    // memset(testFromBuf, '\0', sizeof(testFromBuf));
    // testChannelService = initChannelService;
}

/*
 * TCTF_TearDown
 *
 * Purpose:
 *   Called by the unit test tool to tear down the app after each test
 */
void TCTF_Test_TearDown(void) {}
