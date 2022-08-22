cmake_minimum_required(VERSION 2.6.4)
project(CFS_IO_LIB C)

include_directories(fsw/public_inc)

set(APP_SRC_FILES
  fsw/src/io_lib_init.c
  fsw/src/io_lib_utils.c
  fsw/src/services/tm_sdlp.c
  fsw/src/services/trans_udp.c
)

# aux_source_directory(fsw/src APP_SRC_FILES)
# aux_source_directory(fsw/src/formats APP_SRC_FILES)
# aux_source_directory(fsw/src/services APP_SRC_FILES)

# Create the app module
add_cfe_app(io_lib ${APP_SRC_FILES})
