#include "std_lib_facilities.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout<<"Enter two values :";
    int val1=0;

    try{
        cin>>val1>>;
        if(!cin) error("Something went wrong with cin");
        switch(val1){
            case 0:
                cout<<"Zero";break;
            default:
                cout<<"not a number";break;
        }
    }
    catch(runtime_error e){
        cout<<e.what();
    }

    return 0;
}