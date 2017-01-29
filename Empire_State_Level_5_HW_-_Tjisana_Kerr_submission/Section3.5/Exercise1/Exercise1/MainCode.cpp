//Tjisana Kerr
//MainCode.cpp
//Exercise 1: Polymorphic ToString() Function


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

int main(void)
{
	Shape* s1 = new Point(10, 20);; // Create shape.	 
	Shape* s2 = new Line (Point(1, 2), Point(3, 4)); // Create line.
	
	cout << s1->ToString() << endl; // Print shape s1.
	cout << s2->ToString() << endl; // Print shape s2
	//ToString function from Point class is called instead of the ToString function from the Shape class
	
	delete s1;
	delete s2;
	return 0;
}