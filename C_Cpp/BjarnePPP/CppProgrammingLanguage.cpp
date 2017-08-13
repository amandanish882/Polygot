#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

void print(const string& label,const vector<int>& v);
void fibonacci(int x,int y,vector<int>& v,int n);

int main(int argc, char** argv){
    vector<int> vector1;
    fibonacci(1,1,vector1,5);
    print("test",vector1);
    return 0;
}

void print(const string& label,const vector<int>& v){
    cout<<"Label "<<label<<" : ";
    for(int i : v)
        cout<<i<<" ";
}

void fibonacci(int x,int y,vector<int>& v,int n){
    v.push_back(x);
    v.push_back(y);
    for(int i=2;i<n;++i)
        v.push_back(v[i-1]+ v[i-2]);
}