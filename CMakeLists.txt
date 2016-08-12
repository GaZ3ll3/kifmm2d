cmake_minimum_required(VERSION 3.5)
project(kifmm2d)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories("/usr/include/eigen3")
set(SOURCE_FILES main.cpp LET.cpp LET.h utils.h LET_Node.cpp LET_Node.h)
add_executable(kifmm2d ${SOURCE_FILES})