#include "std_lib_facilities.h"
using std::cout;

void print(const vector<string>& nameSource,const vector<int>& ageSource);
void printsorted(vector<string>& nameSource,const vector<int>& ageSource);
int find_index(const vector<string>& source,const string& name);

int main() {
    cout<<"Enter name and age \n";
    vector<string> names;
    vector<int> ages;
    string name;
    int age;
    while(cin>>name>>age && name!="noname"){
        names.push_back(name);
        ages.push_back(age);
    }
    print(names,ages);
    cout<<"\n=================\nSORTED\n=================\n";
    printsorted(names,ages);
    return 0;
}

void print(const vector<string>& nameSource,const vector<int>& ageSource){
    for(int i=0;i<nameSource.size();++i)
        cout<<nameSource[i]<<" "<<ageSource[i]<<endl;
}

void printsorted(vector<string>& nameSource,const vector<int>& ageSource){
    vector<string> nameNotSorted = nameSource;
    vector<int> ageSorted;
    sort(nameSource.begin(),nameSource.end());
    for(int i=0;i<nameSource.size();++i)
        ageSorted.push_back(ageSource[find_index(nameNotSorted,nameSource[i])]);
    print(nameSource,ageSorted);
        
}

int find_index(const vector<string>& source,const string& name){
    for(int i=0;i<source.size();++i)
        if(name==source[i])
            return i;
}