#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>

int main(int argc,char** argv){
    Point p1(4.0, 4.0);
	Circle c1(5.0,p1);
	std::cout << c1.ToString()<<std::endl;
	std::cout << "Area = " << c1.Area()<< " Circumference  = " << c1.Circumference()<<std::endl;
    return 0;
}