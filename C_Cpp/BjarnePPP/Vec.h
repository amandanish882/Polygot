//
// Created by tjisana on 9/3/17.
//

#ifndef BJARNEPPP_VEC_H
#define BJARNEPPP_VEC_H

template<typename T>
class Vec {
private:
    T* elem;
    int sz;
public:
    Vec(int s);
    ~Vec();
    T& operator[](int i);
    const T& operator[](int i) const;
    int size()const{return sz;}
    T* begin();
    T* end();
};


#endif //BJARNEPPP_VEC_H
