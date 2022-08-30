/*
 * Includes
 */

#include "io_lib.h"
#include "io_lib_init_test_utils.h"

/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"

void Test_IO_LibInit_Nominal(void) {}
void UtTest_Setup(void)
{
    UtTest_Add(Test_IO_LibInit_Nominal, IO_Lib_Init_Test_Setup, IO_Lib_Init_Test_TearDown, "Test_IO_LibInit_Nominal");
}
