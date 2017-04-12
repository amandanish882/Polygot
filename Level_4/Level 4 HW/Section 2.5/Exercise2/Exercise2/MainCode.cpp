//Tjisana Kerr
//Exercise 2: Creating Array of Pointers


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(void)
{
	int arrSize = 3;
	Point** arr = new Point*[arrSize];
	arr[0] = new Point(1.0);
	arr[1] = new Point(3.0, 3.0);
	arr[2] = new Point(*arr[0]);

	for (int i = 0; i < arrSize; i++)
	{
		cout << *arr[i]<<endl;//print out each Point. Points were created by different constructors
	}

	for (int i = 0; i < arrSize; i++)
	{
		delete arr[i]; //delete each object created
	}
	delete[] arr; //delete array 
	return 0;
	//have to make drawing to complete assignment
}