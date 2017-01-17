#include <iostream>

using std::cout;

int main(int argc,char** argv){
    int* i= NULL;
    int tjage=31;
    i=&tjage;

    int& j = tjage;
    cout<<*i<<'\n';
    cout<<j<<'\n';
    j=29;
    cout<<tjage<<'\n';
    cout<<&tjage<<'\n'<<&j<<'\n';

    int k = 39;
    i=&k;
    j=*i;
    cout<<j;
    return 0;
}