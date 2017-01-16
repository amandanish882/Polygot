#include "Circle.hpp"
#include <sstream>
#include <string>
#include <cmath>

constexpr double pi() { return std::atan(1)*4; }

Circle::Circle(double radius,const Point& center):radius(radius),center(center){

}
Circle::Circle(const Circle& circle):center(circle.center),radius(circle.radius){

}

Point Circle::Center() const{
    return center;
}

double Circle::Radius() const{
    return radius;
}

double Circle::Diameter() const{
    return 2 * radius;
}

//inline double Circle::Area() const{
double Circle::Area() const{
    return pi() * radius * radius;
}

//inline double Circle::Circumference() const{
double Circle::Circumference() const{
    return pi() * 2 * radius;
}

std::string Circle::ToString() const{
    std::stringstream s;
    s<<"Center of circle is "<<center.ToString()<<";Radius is "<<radius;
    return s.str();
    //return "Center of circle is " + center.ToString() + ";Radius is " + std::to_string(radius);
}

Circle& Circle::operator = (const Circle& source){
    if(this==&source) return *this;
    center = source.center;
    radius = source.radius;
    return *this;
}

std::ostream& operator << (std::ostream& os,const Circle& source){
    os<<"Center of circle is "<<source.center<<";Radius is "<<source.radius;
    return os;
}