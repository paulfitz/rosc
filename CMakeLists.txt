cmake_minimum_required(VERSION 2.8)

project(rosc)

file(GLOB_RECURSE srcs rosc_core/src/*.cpp rosc_core/src/*.cc rosc_core/src/*.c)
file(GLOB_RECURSE hdrs rosc_core/include/*.h)

include_directories(${CMAKE_SOURCE_DIR}/rosc_core/include)
include_directories(${CMAKE_SOURCE_DIR}/rosc_sys_linux_x86/include)

add_library(rosc ${srcs} ${hdrs})

add_executable(rosc_linux_test rosc_linux_test/src/main.c)
target_link_libraries(rosc_linux_test rosc)
