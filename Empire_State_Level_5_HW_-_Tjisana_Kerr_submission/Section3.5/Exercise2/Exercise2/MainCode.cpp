//Tjisana Kerr
//MainCode.cpp
//Exercise 2: Calling Base Class Functionality


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
	Shape* s1 = new Point(10, 20);; // Create shape.	 
	Shape* s2 = new Line (Point(1, 2), Point(3, 4)); // Create line.
	Shape* s3 = new Circle();
	
	cout << s1->ToString() << endl; // Print shape s1.
	cout << s2->ToString() << endl; // Print shape s2
	cout << s3->ToString() << endl; // Print shape s3
	//ToString function from Point class is called instead of the ToString function from the Shape class
	
	delete s1;
	delete s2;
	return 0;
}//the IDs for each shape is printed