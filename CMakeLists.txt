CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(Observe_Project)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_STANDARD 20)

aux_source_directory(. SRC)
add_executable(observe ${SRC})

# Test prog
aux_source_directory(TestProg SRC_TEST_PROG)
add_executable(aprog ${SRC_TEST_PROG})

# Readelf prog
link_libraries(elf)
aux_source_directory(ReadElf SRC_READELF)
add_executable(readelf_ ${SRC_READELF})