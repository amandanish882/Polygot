#ifndef PS4HPP
#define PS4HPP

#include <string>
using namespace std;

class PS4{
    private:
        int numberOfControllers;
        string version;
        string color;
    public:
        //default constructor
        PS4(){}

        PS4(string version,string color,int numberOfControllers=1):
        version(version),
        color(color),
        numberOfControllers(numberOfControllers)
        {

        }

        //getter
        string getVersion(){return version;}
        string getColor(){return color;}
        int getnumberOfControllers(){return numberOfControllers;}

};

#endif