#ifndef VECTOR_H
#define VECTOR_H

class Vector{
private:
    int sz;
    double* elem;

public:
    Vector(int sz):elem{new double[sz]},sz{sz}{}
    ~Vector(){ delete[] elem;}
    double& operator[](int i){return elem[i];}
    int size()const {return sz;}
};

#endif