//
// Created by desktop on 3/25/17.
//

#ifndef FEDUFFY_SHAPE_H
#define FEDUFFY_SHAPE_H

#include <string>

class Shape{
public:
    std::string name;
    Shape(std::string name):name(name){}
    virtual ~Shape(){}
};

#endif //FEDUFFY_SHAPE_H
