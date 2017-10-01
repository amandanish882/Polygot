cmake_minimum_required(VERSION 3.5)
project(BjarnePPP)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES std_lib_facilities.h CppProgrammingLanguage.cpp complex.cpp complex.h cmake-build-debug/Vector.cpp Point.h Shape.h Circle.h Smiley.h Vector.h Myclass.h Vec.cpp Vec.h Less_than.h)
add_executable(BjarnePPP ${SOURCE_FILES})