//Tjisana Kerr
//MainCode.cpp
//Exercise 2: Creating Shape Base Class


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
	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	cout << s.ToString() << endl; // Print shape.
	cout << p.ToString() << endl; // Print point.
	cout << l.ToString() << endl; // Print line	
	cout << "Shape ID: " << s.ID() << endl; // ID of the shape.

	cout << "Point ID: " << p.ID() << endl; // ID of the point. Does this work?
	//this works because Point p inherits the data member "m_id" from the Shape class. m_id is set by the constructor in the Base class.(Shape) 

	cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work?
	//this works because Line l inherits the data member "m_id" from the Shape class. m_id is set by the constructor in the Base class.(Shape)

	Shape* sp; // Create pointer to a shape variable.
	sp = &p; // Point in a shape variable. Possible?

	cout << sp->ToString() << endl; // What is printed?
	//the m_id variable is printer. The ToString function from the Base class is called

	// Create and copy Point p to new point.
	Point p2;
	p2 = p;

	cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call
	// the base class assignment in point?
	//if the base class assignment is not overridden, then Point p2 will retain the m_id it got when it was first created, as opposed to taking the m_id of p


	return 0;
}