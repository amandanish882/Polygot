cmake_minimum_required(VERSION 3.5)
project(BjarnePPP)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES std_lib_facilities.h CppProgrammingLanguage.cpp Date.cpp Date.h Rational.cpp Rational.h)
add_executable(BjarnePPP ${SOURCE_FILES})