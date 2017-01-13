// Point.cpp
//
// Source file for Class Point
//Implementation of member functions in Point.hpp
//Section 2.3 Exercise 1
//Extra constructors added to code

#include "Point.hpp"
#include <sstream>
#include <cmath>

Point::Point() : x(0),y(0) //default constructor
{
	//std::cout << "Constructor" << std::endl;
}

Point::~Point()
{
	//std::cout << "Destructor" << std::endl;
}

Point::Point(const Point& source): x(source.getX()),y(source.getY()) //copy constructor
{
	//x = source.getX();
	//y = source.getY();
	//std::cout << "Copy Constructor" << std::endl;
}

Point::Point(double xval, double yval) : x(xval), y(yval)
{
	//initialize member data with values
	/*x = xval;
	y = yval;*/
	//std::cout << "Constructor" << std::endl;
}

double Point::getX() const //return value of x coordinate
{	
	return x;
}

double Point::getY() const //return value of y coordinate
{	
	return y;
}

void Point::setX(double newX) //set value of x member data
{	
	x = newX;
}

void Point::setY(double newY) //set value of y member data
{	
	y = newY;
}

std::string Point::ToString() //print x and y coordinate on console
{
	std::stringstream ss;	
	ss << "Point(" << x << "," << y << ")"; //concatenate string components and double components	
	return ss.str();
}

double Point::DistanceOrigin() //distance from origin
{
	return std::sqrt(x*x + y*y);
}

double Point::Distance(Point P) //distrance from another point
{
	return std::sqrt(std::pow((P.x - x), 2) + std::pow((P.y - y), 2));
}