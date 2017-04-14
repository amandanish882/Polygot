//Exercise 5: Line Class
// Point.hpp
// Header file for Class Point

#ifndef Point_HPP
#define Point_HPP

#include <iostream>

class Point
{
public:
	//constructors and destructor
	Point();//default constructor	
	Point(const Point& source);	//copy constructor
	Point(double xval, double yval);//constructor to initialize with values
	~Point(); //destructor

	//acessing functions
	double X() const; //get value of x cordinate
	double Y() const; //get value of y cordinate
	void X(double newX); //set value of x coordinate
	void Y(double newY); //set value of y coordinate
	std::string ToString() const; //a string description of the point

	//new distance functions
	double Distance() const; // Calculate the distance to the origin (0, 0).
	double Distance(const Point& P) const; // Calculate the distance between two points.

private:
	//memeber data
	double x; // x coordinate
	double y; // y coordinate
};

#endif