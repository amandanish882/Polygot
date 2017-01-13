#include "Point.hpp"
#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char** argv){
    //cout<<"Enter x and y separated by space ";
    //double x=0.0,y=0.0;
    //cin>>x>>y;
    Point point;    
    point.X(3.0);
    point.Y(5.0);
    cout<<point.ToString()<<'\n';
    cout<<point.X()<<" "<<point.Y()<<'\n';

    Point point1(6.0,9.0);
    cout<<point1.ToString()<<"distance from origin is "<<point1.Distance()<<'\n';
    cout<<point1.ToString()<<" distance from "<<point.ToString()<<" is "<<point1.Distance(point)<<'\n';
    return 0;
}
