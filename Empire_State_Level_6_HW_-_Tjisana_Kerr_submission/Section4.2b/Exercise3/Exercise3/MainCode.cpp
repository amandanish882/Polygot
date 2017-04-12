//Tjisana Kerr
//MainCode.cpp
//Exercise 3: Point Array (concrete inheritance)


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
//#include "Array.cpp"
#include "NumericArray.hpp"
#include "PointArray.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using TKerr::CAD::Line;
using TKerr::CAD::Point;
using TKerr::CAD::Shape;
using TKerr::CAD::Circle;
using TKerr::Containers::Array;
using TKerr::Containers::NumericArray;
using TKerr::Containers::PointArray;
using TKerr::Containers::ArrayException;


int main(void)
{	
	PointArray<Point> intArray5(4);

	//test all the Point constructors
	intArray5[0] = Point(4);
	intArray5[1] = Point(2,2);
	intArray5[2] = Point();
	intArray5[3] = Point(8);
	
	cout << intArray5.Length() << endl;;
	
	return  0;
}

