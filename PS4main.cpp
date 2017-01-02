#include "PS4.hpp"
#include <iostream>
using namespace std;

void isCool(PS4 ps4);

int main(){
    PS4* p2 = new PS4("Tjisana");    
    cout<<p2->getOwner()<<endl;
    PS4 p3("pro","white");
    cout<<p3.getVersion()<<endl;
    isCool(p3);
    delete p2;
    return 0;
}

void isCool(PS4 ps4){
    if(ps4.getVersion()=="pro")
        cout<<"Is COOL\n";
}