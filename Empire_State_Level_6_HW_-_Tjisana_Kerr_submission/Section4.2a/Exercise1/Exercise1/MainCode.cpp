//Tjisana Kerr
//MainCode.cpp
//Exercise 1: Templated Array Class



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
	unsigned int size = 4;
	Array<Point> points(size);

	//use all variations of constructors to set Point variables
	points[0] = Point();
	points[1] = Point(2.0, 4.0);
	points[2] = Point(points[1]);
	points[3] = Point(8.0);

	//print all elements of array points
	for (unsigned int i = 0; i < size; i++)
	{
		cout << points[i] << endl;
	}

	return  0;
}//

//#ifndef Array_cpp // Must be the same name as in source file #define
//#include "Array.cpp"
//#endif

//the above code was included in the Array.cpp file. The above instruction tells the preprocessor 
//to treat the contents of a specified file as if they appear in the source program at the point where the directive appears. 
//Thus the contents on both Array.hpp and Array.cpp reside in the same file at compilation time. Only Array.hpp needs to be included in the MainCode.cpp