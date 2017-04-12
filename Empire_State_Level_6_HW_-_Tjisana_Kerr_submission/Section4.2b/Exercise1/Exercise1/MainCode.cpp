//Tjisana Kerr
//MainCode.cpp
//Exercise 1: Static Variable for Array Default Size


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
//#include "Array.cpp"
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
using TKerr::Containers::ArrayException;


int main(void)
{
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;
	cout << intArray1.DefaultSize() << endl;
	cout << intArray2.DefaultSize() << endl;
	cout << doubleArray.DefaultSize() << endl;
	intArray1.DefaultSize(15);
	cout << intArray1.DefaultSize() << endl;
	cout << intArray2.DefaultSize() << endl;
	cout << doubleArray.DefaultSize() << endl;
	return  0;
}//
//4,4,4,15,15,4
//Any instance of the class array will have the default size of 4. So the 4,4,4 make sense. 
//intArray1 is set to default size 15 but in doing so it sets the default size for any member of that class.
//now intArray1 and intArray2 both have a default size of 15
//Even though doubleArray is an instance of the array class it has a different static defaultsize variable that the intArray. 
//Array<int> and Array<double> are two different classes
