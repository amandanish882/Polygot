#include "Array.cpp"
#include "Point.hpp"

using namespace TK::Containers;
using namespace TK::CAD;
using std::cout;
using std::endl;

int main(int argc,char** argv){
    Array<Point> points(4);
    cout<<"Array size "<<points.Size()<<endl;

    try{
        points [4] = Point(4.0);

    }    
    catch(ArrayException& exception){
        std::cout<<exception.GetMessage();
    }
    catch(SizeMismatchException& exception){
        std::cout<<exception.GetMessage();
    }
    return 0;
}