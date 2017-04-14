#include <iostream>
#include <vector>
#include <algorithm>
#include <error.h>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    try{
        vector<string> names;
        vector<int> scores;
        string name="";
        int score=0;
        while(cin>>name>>score && name!="NoName"){
            if(names.size()>0 && std::find(names.begin(),names.end(),name)!=names.end()){
                throw std::runtime_error("Duplicate");
            }
            names.push_back(name);
            scores.push_back(score);
        }
        for(int i=0;i<names.size();++i){
            cout<<names[i]<<" "<<scores[i]<<endl;
        }
    }
    catch(std::runtime_error e){
        cout<<e.what();
    }
    return 0;
}