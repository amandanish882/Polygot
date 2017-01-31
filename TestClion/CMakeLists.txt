cmake_minimum_required(VERSION 3.6)
project(TestClion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Array.cpp Array.h Exceptions.cpp Exceptions.hpp)
add_executable(TestClion ${SOURCE_FILES})