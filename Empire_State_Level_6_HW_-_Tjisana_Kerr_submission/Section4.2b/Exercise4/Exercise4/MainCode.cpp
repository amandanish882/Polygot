//Tjisana Kerr
//MainCode.cpp
//Exercise 4: Stack Class (composition)


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
//#include "Array.cpp"
#include "NumericArray.hpp"
#include "PointArray.hpp"
#include "Stack.hpp"
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
using TKerr::Containers::Stack;
using TKerr::Containers::PointArray;
using TKerr::Containers::ArrayException;


int main(void)
{	

	Stack<Point> s1(2);
	
	//pop on an empty stack
	try
	{
		s1.pop();
	}
	catch (ArrayException& err)
	{
		std::cout << err.GetMessage() << std::endl;
	}

	//push two points, then pop
	s1.push(Point(4));
	s1.push(Point(8));
	cout<<s1.pop()<<endl;


	s1.push(Point(8));

	//push a point when stack is full
	try
	{
		s1.push(Point(12));
	}
	catch (ArrayException& err)
	{
		std::cout << err.GetMessage() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unhandled exception" << std::endl;
	}
	return  0;
}//tested program with types "int" and "Point"

