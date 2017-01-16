#include "Point.hpp"
#include <sstream>
#include <cmath>
#include <iostream>

using std::cout;

Point::Point(){cout<<"Default Constructor\n";}

Point::Point(double x,double y):m_x(x),m_y(y){cout<<"2 Parameter Point Constructor\n";}

Point::Point(double d):m_x(d),m_y(d){}

Point::Point(const Point& point){
    cout<<"Copy Constructor\n";
    m_x = point.m_x;
    m_y = point.m_y;
}

Point::~Point(){cout<<"Default Destructor\n";}

void Point::X(double x){
    m_x  = x;
}

void Point::Y(double y){
    m_y  = y;
}

std::string Point::ToString() const{
    std::stringstream s;
    s<<"Point("<<m_x<<","<<m_y<<")";
    return s.str();
}

double Point::Distance() const{
    return std::sqrt(m_x*m_x +m_y*m_y);
}

double Point::Distance(const Point& p) const{
    return std::sqrt((p.m_x - m_x) * (p.m_x - m_x) + (p.m_y - m_y) * (p.m_y - m_y));
}

Point Point::operator - () const{
    return Point(-m_x,-m_y);
}

Point Point::operator * (double factor) const{
    return Point(factor*m_x,factor * m_y);
}

Point Point::operator + (const Point& p) const{
    return Point(m_x+p.m_x,m_y+p.m_y);
}

bool Point::operator == (const Point& p) const{
    return (m_x==p.m_x) && (m_y==p.m_y);
}

Point& Point::operator = (const Point& source){
    if(this==&source) return *this;
    m_x = source.m_x;
    m_y = source.m_y;
    return *this;
}

Point& Point::operator *= (double factor){
    m_x *= factor;
    m_y *= factor;
    return *this;
}

std::ostream& operator << (std::ostream& os, const Point& point){
    os<<"Point("<<point.m_x<<","<<point.m_y<<")\n";
    return os;
}