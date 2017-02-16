//
// Created by desktop on 2/15/17.
//
#include "Array.cpp"
#include "NumericArray.cpp"
#include "Point.hpp"

using namespace TK::Containers;
using namespace TK::CAD;

int main(int argc, char** argv){
    NumericArray<int> intArray1;
    NumericArray<int> intArray2;
    NumericArray<int> intArray3;
    NumericArray<int> intArray4(8);
    NumericArray<Point> intArray5(2);

    intArray5[0] = Point(4);
    intArray5[1] = Point(2,2);

    for (int i = 0; i < intArray1.Size(); i++)
    {
        intArray1[i] = i + 1;
        intArray2[i] = i + 2;
    }

    try{
        intArray1 = intArray2 + intArray4;
    }
    catch(ArrayException& err){
        std::cout<<err.GetMessage();
    }
    catch(SizeMismatchException& err){
        std::cout<<err.GetMessage();
    }
    catch(...){
        std::cout<<"Unhandled exception\n";
    }

    return 0;
}