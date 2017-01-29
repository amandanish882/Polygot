//Tjisana Kerr
//MainCode.cpp
//Exercise 5: Template Method Pattern


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
#include "Array.hpp"
#include "Shape.hpp"

using std::cout;
using std::endl;
using TKerr::CAD::Line;
using TKerr::CAD::Point;
using TKerr::CAD::Shape;
using TKerr::CAD::Circle;

int main(void)
{
	Point p1;
	Line l1;
	Circle c1;

	p1.Print();
	l1.Print();
	c1.Print();
	return 0;
}//