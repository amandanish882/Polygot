#include "Array.hpp"
#include "../PointClass/Point.hpp"
#include "../Exceptions.hpp"
#include <iostream>

int main(int argc,char** argv){
    const TK::Containers::Array arr(2);
    try{
        std::cout<<arr[2];
    }    
    catch(ArrayException& exception){
        std::cout<<exception.GetMessage();
    }
    return 0;
}