cmake_minimum_required(VERSION 3.5.1)
project(TestClionREDI)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES maintest.cpp)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -g")

add_executable (a.out ${SOURCE_FILES})