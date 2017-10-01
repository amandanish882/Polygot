//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_POINT_H
#define BJARNEPPP_POINT_H


class Point {
public:
    Point(double x,double y):x{x},y{y}{}
    double xcoor() const {return x;}
    void xcoor(double x){this->x=x;}
    double ycoor() const {return y;}
    void ycoor(double y){this->y=y;}
private:
    double x;
    double y;
};


#endif //BJARNEPPP_POINT_H
