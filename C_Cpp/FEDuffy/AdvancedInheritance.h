//
// Created by desktop on 3/26/17.
//

#ifndef FEDUFFY_ADVANCEDINHERITANCE_H
#define FEDUFFY_ADVANCEDINHERITANCE_H

#include <iostream>

class B{
private:
    double* d;
public:
    B(){d = new double(1.0);}
    virtual ~B(){
        std::cout<<"Base destructor\n";
    }

};

class D:public B{
private:
    int* iarr;
public:
    D(int N){iarr = new int[N];}
    ~D(){
        std::cout<<"Derived destructor\n";
        delete [] iarr;
    }
};

#endif //FEDUFFY_ADVANCEDINHERITANCE_H
