//Level 3 HW - Section 2.2 - Exercise 1
//Author - Tjisana Kerr
//TestPoint.cpp
//Used to test the class Point

#include "Point.hpp"
#include <iostream>
#include <string>

int main(void)
{
	double u_X = 0.0; //variable for user input for coordinate X
	double u_Y = 0.0; //variable for user input for coordinate Y

	//prompt for user input
	std::cout << "Enter x coordinate : ";
	std::cin >> u_X;
	std::cout << "Enter y coordinate : ";
	std::cin >> u_Y;

	Point p1;	// uses default constructor
	p1.setX(u_X); //set X coordinate of Point p1
	p1.setY(u_Y); //set Y coordinate of Point p1

	//uses ToString member function to print x and y coordinates
	std::cout<<p1.ToString()<<std::endl;

	//uses getter functions to print x and y coordinates
	std::cout <<"Point(" << p1.getX()<< "," << p1.getY() << ")";

	return 0;
}