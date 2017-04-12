//Exercise 4: Friends
//Tjisana Kerr



#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	Point p1(4.0, 4.0);
	std::cout << p1 << '\n';
	Line L1(p1, Point(4.0, 8.0));
	std::cout << L1;
	Circle C1(4.0, Point(0, 0));
	std::cout << C1 << '\n';

	return 0;
}