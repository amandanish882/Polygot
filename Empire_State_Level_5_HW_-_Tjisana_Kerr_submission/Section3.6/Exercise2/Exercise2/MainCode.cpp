//Tjisana Kerr
//MainCode.cpp
//Exercise 2: Exception Objects


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
using TKerr::Containers::ArrayException;

int main(void)
{
	Array a1(4);
	try
	{
		std::cout << a1[4];
	}
	catch (ArrayException& err)
	{
	
		std::cout << err.GetMessage() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unhandled exception" << std::endl;
	}
	return 0;
}//