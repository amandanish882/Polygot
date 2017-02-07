cmake_minimum_required(VERSION 3.6)
project(ArrayClass)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Array.cpp
        Array.hpp
        Arraymain.cpp
        ../Exceptions.cpp
        NumericArray.cpp NumericArray.h PointArray.cpp PointArray.h
        Point.cpp
        Point.hpp
        Shape.hpp
        Shape.cpp
    )

add_executable(ArrayClass ${SOURCE_FILES})