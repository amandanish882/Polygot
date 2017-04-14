//Tjisana Kerr
//MainCode.cpp
//Exercise 2: Numeric Array (generic inheritance)


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
//#include "Array.cpp"
#include "NumericArray.hpp"
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
using TKerr::Containers::ArrayException;


int main(void)
{	
	NumericArray<int> intArray1;
	NumericArray<int> intArray2;
	NumericArray<int> intArray3;
	NumericArray<int> intArray4(8);
	NumericArray<Point> intArray5(2);

	intArray5[0] = Point(4);
	intArray5[1] = Point(2,2);
	
	for (int i = 0; i < intArray1.Size(); i++)
	{
		intArray1[i] = i + 1;
		intArray2[i] = i + 2;
	}

	cout << "iA1" << '\t' << "iA2" << endl;
	for (int i = 0; i < intArray1.Size(); i++) cout << intArray1[i] << '\t' << intArray2[i] << endl;
	cout <<endl;

	cout << "iA3" << endl;
	intArray3 = intArray1 + intArray2;
	for (int i = 0; i < intArray1.Size(); i++) cout << intArray3[i]<< endl;
	cout << endl;

	//intArray3 = intArray2 * 4;
	cout << "iA2 * 4" << endl;
	for (int i = 0; i < intArray1.Size(); i++) cout << (intArray2 * 4)[i] << endl;
	cout << endl;

	try
	{
		intArray1 = intArray2 + intArray4;
		cout << "iA1" << endl;
		for (int i = 0; i < intArray1.Size(); i++) 	cout << intArray1[i] << endl;
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
}//
//What assumptions do you make about the type used as template argument?
//the type must be of type int,float or double. Another assumption is that the type used has defined overloaded assumptions or that there is an acceptable conversion the compiler can use

//Can you create a numeric array with Point objects?
//Yes this is possible. Only operations that have defined behaviour or that have acceptable conversions can be performed