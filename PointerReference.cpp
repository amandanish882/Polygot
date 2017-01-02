#include <iostream>
using namespace std;

int main(int argc,char** argv){
    int reforiginal =30;
    int pntoriginal = 31;

    int* refo = &reforiginal;
    cout<<refo<<endl;
    cout<<*refo<<endl;

    int& pnto = pntoriginal;
    cout<<pnto<<endl;
    pnto=32;
    cout<<pntoriginal;

    return 0;
}