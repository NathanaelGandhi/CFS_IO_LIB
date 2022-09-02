#include "tm_sdlp_test_utils.h"
#include "tm_sdlp.h"

TM_SDLP_FrameInfo_t     frameInfo;
TM_SDLP_GlobalConfig_t  globConfig;
TM_SDLP_ChannelConfig_t chnlConfig;
// CFE_SB_Msg_t           *idlePacket = (CFE_SB_Msg_t *)idleBuff;
uint8 mcFrameCnt;

void Test_Reset(void)
{
    // memset(&frameInfo, 0x0, sizeof(TM_SDLP_FrameInfo_t));
    // memset(&globConfig, 0x0, sizeof(TM_SDLP_GlobalConfig_t));
    // memset(&chnlConfig, 0x0, sizeof(TM_SDLP_ChannelConfig_t));

    // mcFrameCnt = 0;
}

void TM_SDLP_Setup(void)
{
    // Test_Reset();
    // Ut_CFE_SB_Reset();
    // Ut_CFE_EVS_Reset();
}

void TM_SDLP_TearDown(void) {}

void TM_SDLP_Setup_ProcessFrame(void)
{
    // TM_SDLP_Setup();
}