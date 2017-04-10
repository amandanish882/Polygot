#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

int main() {
    try{
        std::vector<double> distances;
        double sumtotal=0.0;
        for(double temp;cin>>temp;){
            distances.push_back(temp);
            sumtotal+=temp;
        }
        std::sort(distances.begin(),distances.end());
        cout<<"smallest "<<distances[0]<<" biggest "<<distances[distances.size()-1]<<endl;
        cout<<"Sum "<<sumtotal;
    }
    catch(std::runtime_error e){
        cout<<e.what();
    }
    return 0;
}