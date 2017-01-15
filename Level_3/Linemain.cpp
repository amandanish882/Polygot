#include "Line.hpp"
#include "Point.hpp"
#include <iostream>

int main(int argc, char** argv){
    
	Line l1;
	
	Point p1(2.0, 3.0);
	Point p2(4.0, 5.0);
	Line L2(p1, p2);
	std::cout<<L2.ToString();
	std::cout << "Length of line is "<<L2.Length()<<std::endl;	
	
    return 0;
}