//Tjisana Kerr
//TestPoint.cpp



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
	Array arr1; //create array
	cout << "Array 1 size: "<<arr1.Size() << endl; //get array size. using default setting from default constructor
	Point* p1 = new Point(2.0, 2.0);
	arr1.SetElement(*p1, 0);
	cout << "arr[0] : "<<arr1.GetElement(0) << endl; //read one element from array using GetElement

	int aSize = 6;

	Array arr2(aSize); 
	for (int i = 0; i < aSize-1; i++)
	{
		arr2.SetElement(Point(1.0 + i, 1.0 + i), i); //set first 5 elements in array
	}

	arr2[aSize-1] = *p1; //set final element  - test overloaded operator
	cout << "Array 2" << endl;
	for (int i = 0; i < aSize; i++)
	{
		cout << "arr["<<i<<"] :"<<arr2.GetElement(i) << endl;
	}

	const Array arr3(arr2);	//create constant object ; use copy constructor
	cout << "Array 3"<<endl<<"arr[" << 4 << "] :" << arr3[4] << endl;//test overloaded operator with constant object

	delete p1;

	return 0;

}
//A const object has a constant state
//Functions that change the state cannot be calledl
//Only ‘const’ member functions can be called for const objects