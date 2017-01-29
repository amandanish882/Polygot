#include "Point.hpp"
#include <iostream>

using std::cout;
using std::cin;
using namespace TK::CAD;

int main(int argc, char** argv){

    Point p(1.0,1.0);
    cout<<p.ToString()<<'\n';
    Shape* pshape = &p;
    cout<<pshape->ToString()<<'\n';

    //
    Shape shape = p;
    cout<<shape.ToString()<<'\n';
    return 0;
}
