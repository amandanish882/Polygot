#include "Shape.hpp"
#include <iostream>

Shape& Shape::operator = (const Shape& source){
    if(this==&source) return *this;
    id = source.id;
    return *this;
}

std::string Shape::ToString() const{
    return "ID: " + std::to_string(id);
}

void Shape::Print() const{
    std::cout<<ToString()<<std::endl;
}