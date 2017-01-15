#ifndef CLASSHPP
#define CLASSHPP

#include "Point.hpp"
#include "Line.hpp"
#include <string>

class Circle{
    private:
        Point center;
        double radius;
    public:
        Circle(){};
        Circle(double radius,const Point& center);
        Circle(const Circle& circle); 
        virtual ~Circle(){}

        //getters
        Point Center() const;
        double Radius() const;

        //setters
        void Center(const Point& point){center = point;};
        void Radius(const double radius){this->radius = radius;}

        //other functions
        double Diameter() const;
        double Area() const;
        double Circumference() const;
        std::string ToString() const;

};


#endif