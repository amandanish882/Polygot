cmake_minimum_required(VERSION 3.5)
project(BjarnePPP)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES C9.cpp std_lib_facilities.h)
add_executable(BjarnePPP ${SOURCE_FILES})