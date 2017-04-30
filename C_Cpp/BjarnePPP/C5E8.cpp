#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(int argc,char** argv){
    std::cout<<"Enter N ";
    int N=0;
    std::cin>>N;
    int temp=0;
    std::vector<int> vec;
    std::cout<<"Enter some integers "<<endl;
    try {
        while (cin >> temp) {
            vec.push_back(temp);
        }
        if(N>vec.size()) throw std::runtime_error("N is bigger than number of size of vector");
    }
    catch(std::runtime_error& e){
        std::cerr<<e.what();
    }

}