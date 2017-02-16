cmake_minimum_required(VERSION 3.5)
project(ArrayClass)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Array.cpp
        Array.hpp
        ../Exceptions.cpp
        NumericArray.cpp NumericArray.h PointArray.cpp PointArray.h
        Point.cpp
        Point.hpp
        Shape.hpp
        Shape.cpp
    )

add_executable(4.2aE1 ${SOURCE_FILES} /home/tjisana/Polygot/Level_6/ArrayClass/Arraymain.cpp)