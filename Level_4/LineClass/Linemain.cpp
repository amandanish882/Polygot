#include "Line.hpp"
#include "../PointClass/Point.hpp"
#include <iostream>

using TK::CAD::Line; //could have also used --> using namespace TK::CAD;
using TK::CAD::Point;

int main(int argc, char** argv){
    
	Line l1;
	
	Point p1(2.0, 3.0);
	Point p2(4.0, 5.0);
	Line L2(p1, p2);
	std::cout<<L2<<std::endl;
	std::cout << "Length of line is "<<L2.Length()<<std::endl;	
	
    return 0;
}