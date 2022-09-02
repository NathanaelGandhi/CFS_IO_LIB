##################################################################
#
# Unit Test build recipe
#
# This CMake file contains the recipe for building cFS app unit tests.
# It is invoked from the parent directory when unit tests are enabled.
#
##################################################################

add_cfe_coverage_stubs("io_lib_internal"
  stubs/cop1_stubs.c
  stubs/io_lib_init_stubs.c
  stubs/io_lib_utils_stubs.c
  stubs/tc_sync_stubs.c
  stubs/tctf_stubs.c
  stubs/tm_sdlp_stubs.c
  stubs/tm_sync_stubs.c
  stubs/tmtf_stubs.c
  stubs/trans_rs422_stubs.c
  stubs/trans_select_stubs.c
  stubs/trans_udp_stubs.c
  utilities/cop1_test_utils.c
  utilities/io_lib_init_test_utils.c
  utilities/io_lib_utils_test_utils.c
  utilities/tc_sync_test_utils.c
  utilities/tctf_test_utils.c
  utilities/tm_sdlp_test_utils.c
  utilities/tm_sync_test_utils.c
  utilities/tmtf_test_utils.c
  utilities/trans_rs422_test_utils.c
  utilities/trans_udp_test_utils.c
)

# Link with the cfe core stubs and unit test assert libs
target_link_libraries(coverage-io_lib_internal-stubs ut_core_api_stubs ut_assert)

# Include and expose unit test utilities includes
target_include_directories(coverage-io_lib_internal-stubs PUBLIC utilities)

# Generate a dedicated "testrunner" executable for each test file
# Accomplish this by cycling through all the app's source files, there must be
# a *_tests file for each
foreach(SRCFILE ${APP_SRC_FILES})

    # Get the base sourcefile name as a module name without path or the  
    # extension, this will be used as the base name of the unit test file.
    get_filename_component(UNIT_NAME "${SRCFILE}" NAME_WE)

    # Use the module name to make the test name by adding _tests to the end
    set(TESTS_NAME "${UNIT_NAME}_tests")
    
    # Make the test sourcefile name with unit test path and extension
    set(TESTS_SOURCE_FILE "${PROJECT_SOURCE_DIR}/unit-test/${TESTS_NAME}.c")

    add_cfe_coverage_test(io_lib "${UNIT_NAME}" "${TESTS_SOURCE_FILE}" "${CFS_IO_LIB_SOURCE_DIR}/${SRCFILE}")

    add_cfe_coverage_dependency(io_lib "${UNIT_NAME}" io_lib_internal)

endforeach()
