#include "Point.hpp"

int main(int argc,char** argv){
    Point* pointdefault = new Point;
    Point* pointcoordinates = new Point(2.2,4.4);
    Point* pointCopyConstructor = new Point(*pointcoordinates);
    std::cout<<*pointCopyConstructor;
    std::cout<<"Enter array size ";
    int arrsize=0;
    std::cin>>arrsize;
    Point* arrPoint = new Point[arrsize];
    delete[] arrPoint;
    delete pointCopyConstructor;
    delete pointcoordinates;
    delete pointdefault;
    return 0;
}