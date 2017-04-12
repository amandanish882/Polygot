//Section 2.2 Exercise 2
//Tjisana Kerr
//TestPoint.cpp
//Used to test the class Point
//program extended from exercise 1 - now includes 2 distance functions.

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

	//Prompt for coorindates of second point
	std::cout << "Enter x coordinate for second point : "; 
	std::cin >> u_X;
	std::cout << "Enter y coordinate for second point: ";
	std::cin >> u_Y;
	Point p2;  //uses default constructor
	p2.setX(u_X); //set X coordinate of Point p2
	p2.setY(u_Y); //set Y coordinate of Point p2

	//uses ToString member function to print x and y coordinates
	std::cout << "Distance from origin of " << p1.ToString() <<" is "<<p1.DistanceOrigin()<<" "<<std::endl;

	//uses getter functions to print x and y coordinates
	std::cout <<"Distance between "<<p1.ToString()<<" and "<<p2.ToString()<<" is "<<p2.Distance(p1)<<std::endl;

	

	return 0;
}