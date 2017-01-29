#include "PointClass/Point.hpp"
#include "ShapeClass/Shape.hpp"

using TK::CAD::Point;
using std::cout;

int main(int argc,char** argv){
    Shape* pshape;
    Point p;
    pshape = &p;
    cout<<pshape->ToString()+'\n';

    Point point2(3.3,4.7);
    point2.Print();
    
    
    return 0;
}