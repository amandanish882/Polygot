//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_MYCLASS_H
#define BJARNEPPP_MYCLASS_H


class Myclass {
private:
    int i;
public:
    Myclass():i{32}{}
    Myclass(int i):i{i}{}
    //copy constructor
    Myclass(const Myclass& source):i{source.i}{std::cout<<"Copy constructor\n";}
    //copy assignment
    Myclass& operator=(const Myclass& source){
        i=source.i;
        std::cout<<"Copy assignment\n";
    }
    //Move constructor
    Myclass(Myclass&& source):i{source.i}{
        source.i=0;
        std::cout<<"Move constructor\n";
    }
    //Move assignment
    Myclass& operator=(Myclass&& source){
        i=source.i;
        source.i=0;
        std::cout<<"Move assignment\n";
    }
};


#endif //BJARNEPPP_MYCLASS_H
