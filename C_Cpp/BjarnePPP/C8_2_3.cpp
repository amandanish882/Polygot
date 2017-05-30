#include "std_lib_facilities.h"

using std::cout;
using std::cin;
using std::endl;

void print(const std::string& label,const vector<int>& vec);

int main() {
    vector<int> sample = {1, 2, 3, 5, 8, 13, 21, 34};
    print("sample",sample);
    return 0;
}

void print(const std::string& label,const vector<int>& vec){
    cout<<"Vector name: "<<label<<endl;
    for(int x:vec)
        cout<<x<<endl;
}