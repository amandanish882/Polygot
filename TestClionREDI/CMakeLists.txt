cmake_minimum_required(VERSION 3.6)
project(TestClionREDI)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Array.cpp Array.h)
add_executable(TestClionREDI ${SOURCE_FILES} Array.cpp Array.h)