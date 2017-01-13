//Exercise 6: Circle Class
//Tjisana Kerr
//TestPoint.cpp
//Used to test the class Point


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Point p1(4.0, 4.0);
	Circle c1(5.0,p1);
	std::cout << c1.ToString()<<std::endl;
	std::cout << "Area = " << c1.Area()<< " Circumference  = " << c1.Circumference()<<std::endl;
	return 0;
}