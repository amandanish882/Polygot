//
// Created by tjisana on 9/3/17.
//

#include "Vec.h"

template<typename T>
Vec<T>::Vec(int s):sz{s},elem{new T[s]} {}

template<typename T>
Vec<T>::~Vec() {
    delete[] elem;
}

template<typename T>
T& Vec<T>::operator[](int i) {
    return elem[i];
}

template <typename T>
const T& Vec<T>::operator[](int i) const {
    return elem[i];
}

template <typename T>
T* Vec<T>::begin() {return &elem[0];}
//T* begin(Vec<T>& x){ return &x[0];}

template <typename T>
T* Vec<T>::end() { return begin() + size();}
//T* end(Vec<T>& x){ return begin(x) + x.size();}