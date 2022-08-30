#include "tc_sync_test_utils.h"

void TC_SYNC_Test_Setup(void)
{
    // memset(cltuBuffer, 0x0, 90);
    // memset(tfBuffer, 0x0, 70);

    // cltuBuffer[0] = 0xeb;
    // cltuBuffer[1] = 0x90;
    // memcpy(&cltuBuffer[82], tailSeq, 8);
}

void TC_SYNC_Test_TearDown(void) {}

void TC_SYNC_Test_Setup_ProcessFrame(void)
{
    TC_SYNC_Test_Setup();
}