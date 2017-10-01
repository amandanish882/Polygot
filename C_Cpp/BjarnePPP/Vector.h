//
// Created by tjisana on 9/2/17.
//

#ifndef BJARNEPPP_VECTOR_H
#define BJARNEPPP_VECTOR_H


#include <iostream>

template<typename T>
class Vector {
private:
    double* elem;
// elem points to an array of sz doubles
    int sz;
public:
    Vector(int s) :elem{new T[s]}, sz{s}
// constructor: acquire resources
    {
        for (int i=0; i!=s; ++i) elem[i]=0;
// initialize elements
    }

    ~Vector() { delete[] elem; }
// destructor: release resources

//    double& operator[](int i){
//        return elem[i];
//    }
//
//    double& operator[](int i)const{
//        return elem[i];
//    }

    /*const*/ T& operator[](int i)const{
        return elem[i];
    }

    int size() const{ return sz;};

    //copy Constructor
    Vector(const Vector& source):elem{new double[source.sz]},sz{source.sz}{
        for(int i=0;i<source.sz;++i)
            elem[i] = source.elem[i];
        std::cout<<"Vector Copy Constructor\n";
    }


    //copy assignment
    Vector& operator=(const Vector& source){
        double* p = new double[source.sz];
        for(int i=0;i<source.sz;++i)
            p[i] = source.elem[i];
        delete[] elem;
        elem=p;
        sz = source.sz;
        std::cout<<"Vector Copy Assignment\n";
        return *this;
    }

    Vector(Vector&& source):elem{source.elem},sz{source.sz}{
        source.elem= nullptr;
        source.sz=0;
        std::cout<<"Vector Move Constructor\n";
    }

    Vector& operator=(Vector&& source){
        elem=source.elem;
        sz=source.sz;
        source.elem= nullptr;
        source.sz=0;
        std::cout<<"Vector Move Assignment\n";
    }

};

#endif //BJARNEPPP_VECTOR_H
