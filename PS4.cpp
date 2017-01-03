#include "PS4.hpp"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

PS4::PS4(){}
PS4::PS4(string version,string color,int numberOfControllers,string InputOwner):
        version(version),
        color(color),
        numberOfControllers(numberOfControllers)        
        {
            cout<<"Default args CONSTRUCTOR\n";
            Owner = new char[strlen(InputOwner.c_str())+1];
            strcpy(Owner,InputOwner.c_str());
}

PS4::PS4(const char* InputOwner){
            if(InputOwner != NULL){
                Owner = new char[strlen(InputOwner)+1];
                strcpy(Owner,InputOwner);
                cout<< "Constructor\n";
                cout<< "Owner points to: " <<hex<<(unsigned int*)Owner<<endl;
            }
            else
                Owner = NULL;

            cout<<"Strength length "<<strlen(Owner)<<endl;
}

PS4::~PS4(){
    cout<<"Destructor "<<Owner<<"\n";
    if(Owner!=NULL){
        delete[] Owner; 
    }
}

//copy constructor
 PS4::PS4(const PS4& copysource){     
     cout<< "Copy Constructor\n";
     cout<< "Owner points to: " <<hex<<(unsigned int*)Owner<<endl;
     if(copysource.Owner!=NULL){
         Owner = new char[strlen(copysource.Owner)+1];        
         strcpy(Owner,"COPY");            
         cout<< "Owner points to: " <<hex<<(unsigned int*)Owner<<endl;
     }
     else
         Owner = NULL;
 }