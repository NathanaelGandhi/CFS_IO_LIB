/*
 * Includes
 */
#include "utstubs.h"
#include "cfe_msgids.h"
#include <time.h>

/*
 * COP1_Setup
 *
 * Purpose:
 *   Called by the unit test tool to set up the app prior to each test
 */
void COP1_Test_Setup(void);

/*
 * COP1_TearDown
 *
 * Purpose:
 *   Called by the unit test tool to tear down the app after each test
 */
void COP1_Test_TearDown(void);

/*
 * COP1_Setup_ProcessFrame
 *
 * Purpose:
 *   Called by the unit test tool to set up the app prior to each test of COP1_ProcessFrame
 *
 * Notes:
 *   Initialize testTf and toBuffer to different values so they can be compared for equality
 *   if a TCTF_CopyData function is called.
 */
void COP1_Test_Setup_ProcessFrame(void);