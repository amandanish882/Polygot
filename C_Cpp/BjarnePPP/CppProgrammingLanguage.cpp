
#include <iostream>
#include "Vector.h"


int main(int argc, char** argv) {
    Vector vector(6);
    vector[0]=1.1;
    std::cout<<vector[0];
    return 0;
}