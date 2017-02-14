cmake_minimum_required(VERSION 3.5)
project(CmakeTutorial)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(SOURCES test.cpp)

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(CmakeTutorial ${SOURCES})