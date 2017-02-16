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
        Stack.cpp Stack.h StackException.cpp StackException.h)

add_executable(4.2aE1 ${SOURCE_FILES} Arraymain.cpp)
add_executable(4.2bE1 ${SOURCE_FILES} Arraymain42bE1.cpp)
add_executable(4.2bE2 ${SOURCE_FILES} Arraymain42bE2.cpp)
add_executable(4.2bE4 ${SOURCE_FILES} Arraymain42bE4.cpp)
add_executable(4.2bE5 ${SOURCE_FILES} Arraymain42bE5.cpp)