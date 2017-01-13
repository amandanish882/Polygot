//Section 2.3 Exercise 1
//Tjisana Kerr
//TestPoint.cpp
//Used to test the class Point
//Program now makes use of copy constructor

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
	Point p1(u_X,u_Y);


	//Prompt for coorindates of second point
	std::cout << "Enter x coordinate for second point : "; 
	std::cin >> u_X;
	std::cout << "Enter y coordinate for second point: ";
	std::cin >> u_Y;
	Point p2(u_X, u_Y);

	//uses ToString member function to print x and y coordinates
	std::cout << "Distance from origin of " << p1.ToString() <<" is "<<p1.DistanceOrigin()<<" "<<std::endl;

	//uses getter functions to print x and y coordinates
	std::cout <<"Distance between "<<p1.ToString()<<" and "<<p2.ToString()<<" is "<<p2.Distance(p1)<<std::endl;

	

	return 0;
}