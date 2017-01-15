#include "VectorBjarne.hpp"
#include <stdexcept> 

VectorBjarne::VectorBjarne(int s){
    if(s<0) throw std::length_error("length error");
    elem = new double[s];
    sz=s;
}

VectorBjarne::~VectorBjarne(){    
}