//Exercise 2: Ostream << Operator
//Tjisana Kerr
//Used to test the class Point


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Point p1(4.0, 4.0);
	std::cout << p1<<'\n';	//overloading operator for Point class
	Line L1(p1, Point(4.0, 8.0));
	std::cout << L1;//overloading operator for Line class
	Circle C1(4.0, Point(0, 0));
	std::cout << C1<< '\n';//overloading operator for Circle class
	return 0;
}