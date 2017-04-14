//Tjisana Kerr
//MainCode.cpp
//Exercise 1: Bounds Checking Array


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
using TKerr::Containers::Array;

int main(void)
{
	Array a1(4);
	try
	{
		std::cout << a1[4];
	}
	catch (int err)
	{
		if (err == -1) std::cout << "Outside of allowable index" << std::endl;
		
	}
	catch (...)
	{
		std::cout << "Unhandled exceptions" << std::endl;
	}
	return 0;
}//