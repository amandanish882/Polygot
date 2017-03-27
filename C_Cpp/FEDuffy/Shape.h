//
// Created by desktop on 3/25/17.
//

#ifndef FEDUFFY_SHAPE_H
#define FEDUFFY_SHAPE_H

#include <string>

class Shape{
public:
    std::string name;
    Shape(){}
    Shape(std::string name):name(name){}
    virtual ~Shape(){}
    virtual inline void print(){std::cout<<"Base Class\n";}
};

#endif //FEDUFFY_SHAPE_H
