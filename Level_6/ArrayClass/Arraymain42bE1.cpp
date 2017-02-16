//
// Created by desktop on 2/15/17.
//

#include <iostream>
#include "Array.cpp"

using std::cout;
using std::endl;
using namespace TK::Containers;

int main(int argc,char** argv){
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
    return 0;
}