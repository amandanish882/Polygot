//Tjisana Kerr
//Exercise 1: Dynamically Creating Objects

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	Point* p1 = new Point();//using default constructor
	cout << "P1 "<<*p1<<'\n';	

	Point* p2 = new Point(2.0, 4.0);//using constructor with coordinates
	cout << "P2 " << *p2 << '\n';
	cout << "Distance from p1 " << (*p2).Distance() << '\n';

	Point* p3 = new Point(*p1);//using copy constructor
	cout << "P3 " << *p3 << '\n';
	
	cout << "Enter array size : ";
	int arrSize = 0;
	cin >> arrSize;	
	Point* arr = new Point[arrSize]; //can only use default constructors

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i]<<'\n';
	}
	
	
	delete p1;
	delete p2;
	delete p3;
	delete[] arr;
	return 0;

}