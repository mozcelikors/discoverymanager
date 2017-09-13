cmake_minimum_required (VERSION 2.8.11)
project (discoverymanager)
#For find_package packages, export someextlib_DIR=/path/to/..
#find_package (someextlib REQUIRED)

#Where to put binary files after "make"
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#Where to put library files after "make"
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/libs)

#Include directory
include_directories (${PROJECT_BINARY_DIR}/inc)

add_library (dmLib SHARED src/discoverymanager.cpp src/help.cpp src/extension_finder.cpp src/error.cpp)

add_executable(discoverymanager src/main.cpp)

target_link_libraries(discoverymanager dmLib)

#Install binary, shared library, static library (archives)
install (TARGETS discoverymanager dmLib
  RUNTIME DESTINATION ${PROJECT_BINARY_DIR}/build
  LIBRARY DESTINATION /usr/lib 
  ARCHIVE DESTINATION /usr/lib)
