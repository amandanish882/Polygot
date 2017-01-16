//Exercise 3: Constructors as conversion operator
//Tjisana Kerr
//Used to test the class Point


#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	Point p(1.0, 1.0);
	if (p == Point(1.0)) cout << "Equal!" << endl; //test implicit conversion
	else cout << "Not equal" << endl;
	return 0;
}

//code complies correctly when keyword "explicit" is not used because compiler makes implicit conversion. 
//code appears to compile correctly even when "explicit" keyword is added i.e. by clicking on "Start without debugging". What I have learned is that I should choose "Rebuild Solution"
//Only then is there a compile error.