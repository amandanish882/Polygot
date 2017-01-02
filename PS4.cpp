#include "PS4.hpp"
#include <iostream>

using namespace std;

PS4::PS4(){}
PS4::PS4(string version,string color,int numberOfControllers):
        version(version),
        color(color),
        numberOfControllers(numberOfControllers)
        {

}

PS4::PS4(const char* InputOwner){
            if(InputOwner != NULL){
                Owner = new char[strlen(InputOwner)+1];
                strcpy(Owner,InputOwner);
            }
            else
                Owner = NULL;

            cout<<"Strength length "<<strlen(Owner)<<endl;
}

PS4::~PS4(){
    cout<<"Destructor\n";
    if(Owner!=NULL){
        delete[] Owner; 
    }
}