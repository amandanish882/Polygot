//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_CIRCLE_H
#define BJARNEPPP_CIRCLE_H


#include "Shape.h"


class Circle: public Shape {
public:
    Circle(Point p, int rr):x{p},r{rr}{}
    Point center() const {return x;}
    void move(Point to) {x=to;}
    void draw() const;
    void rotate(int){}
private:
    Point x;
    int r;

};


#endif //BJARNEPPP_CIRCLE_H
