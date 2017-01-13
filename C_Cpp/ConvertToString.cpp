#include <iostream>
#include <string>
#include <sstream>

using std::stringstream;
using std::cout;
//convert to string
int main(int argc, char** argv){
    double myDouble = 31.4;
    stringstream s; 
    s<<myDouble;
    cout<<s.str();

    return 0;
}