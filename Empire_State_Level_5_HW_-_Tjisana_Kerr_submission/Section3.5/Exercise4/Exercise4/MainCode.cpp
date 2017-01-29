//Tjisana Kerr
//MainCode.cpp
//Exercise 4: Abstract Functions


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
	Shape* shapes[10];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	for (int i = 3; i < 9; i++) shapes[i]= new Point;
	shapes[9] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	for (int i = 0; i != 10; i++) shapes[i]->Draw();
	for (int i = 0; i != 10; i++) delete shapes[i];
	return 0;
}//