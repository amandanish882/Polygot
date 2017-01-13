
//notice Templates.cpp file is includes as opposed to Templates.HPP
#include "Templates.cpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv){
    int num1=0,num2=0;
    cout<<"Enter two numbers ";
    cin>>num1>>num2;
    cout<<Max<int>(num1,num2)<<endl;    
    return 0;
}