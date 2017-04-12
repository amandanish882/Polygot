//Circle Class. Function implementation
#define _USE_MATH_DEFINES
#include <cmath>
#include <sstream>
#include "Circle.hpp"
#include "Point.hpp"
#include "Line.hpp"

Circle::Circle()// default constructor
{}

Circle::Circle(double r, const Point& pt) : m_radius(r), center(pt)
{}

Circle::~Circle()
{}

Circle::Circle(const Circle& C1) : m_radius(C1.m_radius),center(C1.center)//copy constructor
{	
}

Point Circle::CenterPoint() const //gets center point
{
	return center; 
}

void Circle::CenterPoint(const Point& pt) //sets center point
{
	center = pt;
}

double Circle::Radius() const //gets radius
{
	return m_radius;
}

void Circle::Radius(const double r) //sets radius
{
	m_radius = r;
}

double Circle::Diameter() const //returns Diameter of circle = Twice lenght of radius
{
	return 2 * m_radius;	
}

double Circle::Area() const //return Area of circle
{
	return M_PI * m_radius * m_radius;
}

double Circle::Circumference() const //return Circumference of circle
{
	return 2 * M_PI * m_radius;
}

std::string Circle::ToString() const //print Center of circle and radius
{
	std::stringstream ss;
	ss << "Center of circle is " << center.ToString()<< ";Radius is " << m_radius;
	return ss.str();
}

//Circle& operator = (const Circle& source);
Circle& Circle::operator = (const Circle& source)
{
	if (this == &source)
		return *this;

	m_radius = source.m_radius;
	center = source.center;
	return *this;
}

//Circle& operator *=(double factor);
Circle& Circle::operator *=(double factor)
{
	return *this;
}

std::ostream& operator << (std::ostream& os, const Circle& C1)
{
	os << C1.ToString();
	return os;
}