#include "Array.cpp"
#include "NumericArray.cpp"
//#include "../Exceptions.hpp"
#include <iostream>

using namespace TK::Containers;
using std::cout;
using std::endl;

int main(int argc,char** argv){
    NumericArray<int> intArray1;
    NumericArray<int> intArray2;
    NumericArray<int> intArray3;
    NumericArray<int> intArray4(8);

    for (int i = 0; i < intArray1.Size(); i++)
    {
        intArray1[i] = i + 1;
        intArray2[i] = i + 2;
    }

    cout << "iA1" << '\t' << "iA2" << endl;
    for (int i = 0; i < intArray1.Size(); i++) cout << intArray1[i] << '\t' << intArray2[i] << endl;
    cout <<endl;

    cout << "iA3" << endl;
    intArray3 = intArray1 + intArray2;
    for (int i = 0; i < intArray1.Size(); i++) cout << intArray3[i]<< endl;
    cout << endl;

    //intArray3 = intArray2 * 4;
    cout << "iA2 * 4" << endl;
    for (int i = 0; i < intArray1.Size(); i++) cout << (intArray2 * 4)[i] << endl;
    cout << endl;

    try{
        NumericArray<int> numericArray;

    }    
    catch(ArrayException& exception){
        std::cout<<exception.GetMessage();
    }
    return 0;
}