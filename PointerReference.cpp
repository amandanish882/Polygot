#include <iostream>
using namespace std;

void useReference(const int& refvar){
    cout<<"In function useReference\n";
    cout<<refvar<<endl;    
}

int main(int argc,char** argv){

    int tjAge = 31;
    int johannAge = 24;
    const int pkAge = 64;
    int* pAge = &tjAge;
    int* pAge1 = NULL;
    cout<<"pAge1 "<<pAge1<<endl;
    pAge1 = &tjAge;

    cout<<pAge<<endl;
    cout<<"Deference pAge "<<*pAge<<endl;    
    cout<<"Deference pAge++ "<<++(*pAge)<<endl;
    
    //pAge = &pkAge; not allowed. need a const pointer
    const int* constpntAge = &pkAge;

    constpntAge = &tjAge;

    //*constpntAge = 41; not allowed. 

    int* const pntconstAge = new int;
    *pntconstAge = 36;
    *pntconstAge = 37;

    useReference(tjAge);
    return 0;
}