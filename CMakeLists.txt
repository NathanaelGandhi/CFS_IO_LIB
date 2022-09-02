cmake_minimum_required(VERSION 2.6.4)
project(CFS_IO_LIB C)

include_directories(fsw/public_inc)

set(APP_SRC_FILES
  fsw/src/io_lib_init.c
  fsw/src/io_lib_utils.c
  fsw/src/services/tm_sdlp.c
  fsw/src/services/trans_udp.c
  fsw/src/formats/tmtf.c
  fsw/src/formats/tctf.c
  fsw/src/services/tm_sync.c
  fsw/src/services/tc_sync.c
)

# Create the app module
add_cfe_app(io_lib ${APP_SRC_FILES})


# If UT is enabled, then add the tests from the subdirectory
# Note that this is an app, and therefore does not provide
# stub functions, as other entities would not typically make
# direct function calls into this application.
if(ENABLE_UNIT_TESTS)
  add_subdirectory(unit-test)
endif()