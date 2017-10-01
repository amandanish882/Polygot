//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_SHAPE_H
#define BJARNEPPP_SHAPE_H

#include "Point.h"

class Shape {
public:
    virtual Point center() const =0;
    virtual void move(Point to)=0;
    virtual void draw()const =0;
    virtual void rotate(int angle)=0;
    virtual ~Shape(){}
};


#endif //BJARNEPPP_SHAPE_H
