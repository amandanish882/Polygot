#include "PS4.hpp"
#include <iostream>
using namespace std;

void isCool(PS4 ps4);

int main(){    
    //PS4 johann("johann");    
    //isCool(johann);
    PS4 Tj("pro","white");
    isCool(Tj);
    return 0;
}

void isCool(PS4 ps4){
    if(ps4.getVersion()=="pro")
        cout<<"Is COOL\n";
}