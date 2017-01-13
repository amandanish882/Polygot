// Point.cpp
// Source file for Class Point
//Implementation of member functions in Point.hpp
//Exercise 5: Line Class


#include "Point.hpp"
#include <sstream>
#include <cmath>

Point::~Point()
{
	//std::cout << "Destructor" << std::endl;
}

Point::Point() : x(0),y(0) //default constructor
{
	//std::cout << "Constructor" << std::endl;
}

Point::Point(const Point& source) : x(x = source.X()), y(source.Y())
 //copy constructor
{
	/*x = source.X();
	y = source.Y();*/
	//std::cout << "Copy Constructor" << std::endl;
}

Point::Point(double xval, double yval) : x(xval), y(yval)
{
	//initialize member data with values
	//x = xval;
	//y = yval;
	//std::cout << "Constructor" << std::endl;
}

double Point::X() const //return value of x coordinate
{	
	return x;
}

double Point::Y() const //return value of y coordinate
{	
	return y;
}

void Point::X(double newX) //set value of x member data
{	
	x = newX;
}

void Point::Y(double newY) //set value of y member data
{	
	y = newY;
}

std::string Point::ToString() const //print x and y coordinate on console
{
	std::stringstream ss;	
	ss << "Point(" << x << "," << y << ")"; //concatenate string components and double components	
	return ss.str();
}

double Point::Distance() const //distance from the origin
{
	return std::sqrt(x*x + y*y);
}

double Point::Distance(const Point& P) const //distance from another point
{
	return std::sqrt(std::pow((P.x - x), 2) + std::pow((P.y - y), 2));
}