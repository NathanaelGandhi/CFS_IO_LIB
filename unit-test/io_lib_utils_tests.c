/*
 * Includes
 */
#include "io_lib_utils.h"
#include "io_lib_utils_test_utils.h"

/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"

void Test_IO_LIB_UTIL_PseudoRandomize_Nominal(void) {}
void UtTest_Setup(void)
{
    UtTest_Add(Test_IO_LIB_UTIL_PseudoRandomize_Nominal, IO_Lib_Utils_Test_Setup, IO_Lib_Utils_Test_TearDown,
               "Test_IO_LIB_UTIL_PseudoRandomize_Nominal");
}
