#include "PS4.hpp"
#include <iostream>
using namespace std;

int main(){
    PS4 p1("slim","black");
    cout<<p1.getVersion()<<endl;
    cout<<p1.getNumberOfControllers()<<endl;
    PS4* p2 = new PS4("pro","white",2);
    cout<<p2->getColor()<<endl;
    cout<<(*p2).getVersion()<<endl;
    cout<<p2->getNumberOfControllers()<<endl;
    delete p2;
    return 0;
}