cmake_minimum_required(VERSION 3.5)
project(FEDuffy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
            Inequalities.h
            Inequalities.cpp
            EuropeanOption.cpp
            EuropeanOption.h
            Shape.h
            Point.h
            Point.cpp
        FunctionPointers.h NonLinearSolver.h AdvancedInheritance.h)
add_executable(FEDuffy ${SOURCE_FILES})