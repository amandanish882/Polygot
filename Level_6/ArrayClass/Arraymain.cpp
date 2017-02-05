#include "Array.cpp"
#include "NumericArray.cpp"
//#include "../Exceptions.hpp"
#include <iostream>

using namespace TK::Containers;
using std::cout;
using std::endl;

int main(int argc,char** argv){

    try{
        Array<int> intArray1;
        Array<int> intArray2;
        Array<double> doubleArray;
        cout<<intArray1.defaultSZ()<<endl;
        cout<<intArray2.defaultSZ()<<endl;
        cout<<doubleArray.defaultSZ()<<endl;
        intArray1.defaultSZ(15);
        cout<<intArray1.defaultSZ()<<endl;
        cout<<intArray2.defaultSZ()<<endl;
        cout<<doubleArray.defaultSZ()<<endl;
    }    
    catch(ArrayException& exception){
        std::cout<<exception.GetMessage();
    }
    return 0;
}