#include "Array.cpp"
#include "NumericArray.cpp"
#include "Point.hpp"
//#include "../Exceptions.hpp"
#include <iostream>

using namespace TK::Containers;
using namespace TK::CAD;
using std::cout;
using std::endl;

int main(int argc,char** argv){
    Array<Point> points(4);
    

    try{
        intArray3.dotproduct(intArray4);

    }    
    catch(ArrayException& exception){
        std::cout<<exception.GetMessage();
    }
    catch(SizeMismatchException& exception){
        std::cout<<exception.GetMessage();
    }
    return 0;
}