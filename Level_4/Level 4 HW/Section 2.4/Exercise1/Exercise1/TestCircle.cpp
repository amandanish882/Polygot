//Tjisana Kerr
//Exercise 1: Adding Operators to the Point class


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Point p1(4.0, 4.0);
	Point p2(2.0, 2.0);
	std::cout << p1.ToString() << '\n';

	//test operator -
	std::cout << (-p1).ToString() << '\n';

	//test operator *
	std::cout << (p1 * 2).ToString() << '\n';

	//test operator +
	std::cout << (p1 + p2).ToString() << '\n';

	//test operator ==
	std::cout << (p1 == p2) << '\n';

	//test operator =
	p1=p2;
	std::cout << p1.ToString() << '\n';

	//test operator *=
	p2 *= 5;
	std::cout << p2.ToString() << '\n';

	return 0;
}