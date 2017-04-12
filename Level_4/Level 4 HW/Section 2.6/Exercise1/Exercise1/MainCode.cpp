//Tjisana Kerr
//TestPoint.cpp
//Used to test the class Point


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
#include "Array.hpp"

using std::cout;
using std::endl;


int main(void)
{

	//names of namespaces to be used in Code
	using TKerr::CAD::Line;
	using namespace TKerr::Containers;
	namespace TCAD = TKerr::CAD;

	TCAD::Circle C1;
	Array arr1; //declare array
	cout << "Array 1 size: "<<arr1.Size() << endl;
	TKerr::CAD::Point* p1 = new TKerr::CAD::Point(2.0, 2.0); //dynically create a Point
	arr1.SetElement(*p1, 0);
	cout << "arr[0] : "<<arr1.GetElement(0) << endl;

	int aSize = 6;

	Array arr2(aSize);
	for (int i = 0; i < aSize-1; i++)
	{
		arr2.SetElement(TKerr::CAD::Point(1.0 + i, 1.0 + i), i); //set first 5 elements of array
	}

	arr2[aSize-1] = *p1; //set last element of array
	cout << "Array 2" << endl;
	for (int i = 0; i < aSize; i++)
	{
		cout << "arr["<<i<<"] :"<<arr2.GetElement(i) << endl;//print to console all elements
	}

	const Array arr3(arr2);	
	cout << "Array 3"<<endl<<"arr[" << 4 << "] :" << arr3[4] << endl;

	delete p1;

	return 0;
}