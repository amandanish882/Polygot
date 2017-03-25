#include <iostream>
#include "Inequalities.cpp"
#include "EuropeanOption.h"

int main() {
//    std::cout<<"Min "<<Min(2.3,4.5,6.7);
//    std::cout<<"Max "<<Max(2.3,4.5,6.7);
    EuropeanOption call(0.10,0.20,95.0,100.0,0.05,0.5,"P");
    std::cout<<call.Price();
    return 0;
}