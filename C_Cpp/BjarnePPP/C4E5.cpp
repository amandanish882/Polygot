#include <iostream>
#include <vector>
#include <algorithm>
#include <error.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
    try{
        double input1=0.0;
        double input2=0.0;
        char operation;
        cout<<"Enter two doubles and a operation character ";
        cin>>input1>>input2>>operation;
        switch(operation){
            case '+':
                cout<<"Sum of "<<input1<<" "<<input2<<" is "<<input1+input2<<endl;
                break;
            case '-':
                cout<<"Difference of "<<input1<<" "<<input2<<" is "<<input1-input2<<endl;
                break;
            case '*':
                cout<<"Product of "<<input1<<" "<<input2<<" is "<<input1*input2<<endl;
                break;
            case '/':
                if(input2==0) throw std::runtime_error("Division by 0 is invalid");
                cout<<"Quotient of "<<input1<<" "<<input2<<" is "<<input1/input2<<endl;
                break;
            default:
                throw std::runtime_error("invalid operation");
        }
    }
    catch(std::runtime_error e){
        cout<<e.what();
    }
    return 0;
}