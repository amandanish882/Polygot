// Point.hpp
//Additions from Section 2.2 Exercise 1 include 2 distance functions 
// Header file for Class Point

#ifndef Point_HPP
#define Point_HPP

#include <iostream>

class Point
{
public:
	//constructors and destructor
	Point(); //default constructor
	~Point(); //destructor

	//acessing functions
	double getX() const; //get value of x cordinate
	double getY() const; //get value of y cordinate
	void setX(double newX); //set value of x coordinate
	void setY(double newY); //set value of y coordinate
	std::string ToString(); //a string description of the point

	//new distance functions
	double DistanceOrigin(); // Calculate the distance to the origin (0, 0).
	double Distance(Point p); // Calculate the distance between two points.

private:
	//memeber data
	double x; // x coordinate
	double y; // y coordinate
};

#endif