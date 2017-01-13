// Point.hpp
//
// Header file for Class Point

#ifndef Point_HPP
#define Point_HPP

#include <iostream>

class Point
{
public:
	//constructors and destructor
	Point();
	Point(double xval, double yval);//constructor to initialize with values
	~Point(); //destructor

	//acessing functions
	double getX() const; //get value of x cordinate
	double getY() const; //get value of y cordinate
	void setX(double newX); //set value of x coordinate
	void setY(double newY); //set value of y coordinate
	std::string ToString(); //a string description of the point

private:
	//memeber data
	double x; // x coordinate
	double y; // y coordinate
};

#endif