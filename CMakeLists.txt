cmake_minimum_required(VERSION 3.21)
project(C8)

set(CMAKE_CXX_STANDARD 14)

add_executable(C8 src/main.cpp)

add_executable(8_1_inline src/8_1_inline.cpp)
add_executable(8_2_firstref src/8_2_firstref.cpp)
add_executable(8_3_sceref src/8_3_sceref.cpp)
add_executable(8_4_swaps src/8_4_swaps.cpp)
add_executable(8_5_cubes src/8_5_cubes.cpp)
add_executable(8_6_strtref src/8_6_strtref.cpp)
add_executable(8_7_strquote src/8_7_strquote.cpp)
add_executable(8_8_filefunc src/8_8_filefunc.cpp)