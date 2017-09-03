#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    cout<<"Please enter number in range [1-10]\n";
    int n=0;
    while(true){
        cin>>n;
        if(cin){ //got an integer
            if(1<=n && n<=10) break;
            cout<<"Not in range\n";
        }
        else if(cin.fail()){
            cin.clear(); //clears state back to good()
            cout<<"That was not a number\n";
            for(char ch;cin>>ch && !isdigit(ch);) //throw away non digits
                cout<<"Something\n";

        }
    }
    return 0;
}