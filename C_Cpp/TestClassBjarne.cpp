#include "VectorBjarne.hpp"
#include <iostream>

void test();

int main(int argc,char** argv){
    VectorBjarne v(31);
    v[0]=69;
    std::cout<<v[0]<<std::endl;
    test();
    return 0;
}

void test(){
    try{
        VectorBjarne vb(-27);        
    }
    catch(std::length_error){
        std::cout<<"Length error\n";
    }
    catch(std::bad_alloc){
        std::cout<<"Bad alloc\n";
    }
}