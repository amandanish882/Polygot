#ifndef PS4HPP
#define PS4HPP

#include <string>
#include <cstring>

using namespace std;

class PS4{
    private:
        int numberOfControllers;
        string version;
        string color;
        char* Owner;
    public:
        //default constructor
        //PS4(){}
        PS4();
        PS4(string version,string color,int numberOfControllers=1);
        PS4(const char* InputOwner);

        //default destructor
        ~PS4();

        //getter
        string getVersion(){return version;}
        string getColor(){return color;}
        int getNumberOfControllers(){return numberOfControllers;}
        const char* getOwner(){return Owner;}
        
};

#endif