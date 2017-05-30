#include "std_lib_facilities.h"

using std::cout;
using std::cin;
using std::endl;

void print(const string& label, const vector<int>& v);
void reverse(vector<int>& source);
//void reverse(vector<int>& source);

int main() {
    vector<int> vector1 = {1,3,5,7,9};
    try{
        print("Vector 1 ",vector1);
        reverse(vector1);
        print("Vector 1 reversed ",vector1);
    }
    catch(...){
        cerr<<"Error\n";
    }
    return 0;
}

void reverse(vector<int>& source){
    vector<int> v;
    for(int i=source.size()-1;i>=0;--i)
        v.push_back(source[i]);
    source=v;
}

void print(const string& label, const vector<int>& v)
// print vector to cout
{
    cout << label << "( ";
    for (int i = 0; i<v.size(); ++i) cout << v[i] << ' ';
    cout << ")\n";
}