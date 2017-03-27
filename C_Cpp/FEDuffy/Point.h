//
// Created by desktop on 3/25/17.
//

#ifndef FEDUFFY_POINT_H
#define FEDUFFY_POINT_H

#include <iostream>
#include "Shape.h"

class Point: public Shape{
private:
    double x;
    double y;
    static Point OriginPoint;
public:
    Point(double x, double y):x(x),y(y){}
    static Point& getOriginPoint();
    friend std::ostream& operator<<(std::ostream& os,const Point& point);
    inline void print(){std::cout<<"Derived Class\n";}
};

#endif //FEDUFFY_POINT_H
