cmake_minimum_required(VERSION 3.6)
project(Level_5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        3.5/CallPayoff.cpp
        3.5/CallPayoff.hpp
        3.5/Payoff.cpp
        3.5/Payoff.hpp
        3.5/TestPayoff.cpp
        ArrayClass/Array.cpp
        ArrayClass/Array.hpp
        ArrayClass/Arraymain.cpp
        CircleClass/Circle.cpp
        CircleClass/Circle.hpp
        CircleClass/Circlemain.cpp
        LineClass/Line.cpp
        LineClass/Line.hpp
        LineClass/Linemain.cpp
        PointClass/Point.cpp
        PointClass/Point.hpp
        PointClass/PointArray.cpp
        PointClass/PointHeap.cpp
        PointClass/PointInheritance.cpp
        PointClass/Pointmain.cpp
        ShapeClass/Shape.cpp
        ShapeClass/Shape.hpp
        Exceptions.cpp
        Exceptions.hpp
        Polymorphism.cpp)

add_executable(Level_5 ${SOURCE_FILES})