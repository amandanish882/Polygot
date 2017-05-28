#include "std_lib_facilities.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout<<"Enter two values :";
    int val1=0;
    int val2=0;
    try{
        cin>>val1>>val2;
        if(!cin) error("Something went wrong with cin");
    }
    catch(runtime_error e){
        cout<<e.what();
    }

    return 0;
}