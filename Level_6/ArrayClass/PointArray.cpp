//
// Created by desktop on 2/6/17.
//

#ifndef POINTARRAY_CPP
#define POINTARRAY_CPP

#include "PointArray.h"

template <typename T=Point>
PointArray<T>::PointArray():Array<T>::Array(){
}

template <typename T=Point>
PointArray<T>::~PointArray(){
}

template <typename T=Point>
PointArray<T>::PointArray(int size):Array<T>::Array(size){
}

template<typename T=Point>
PointArray<T>::PointArray(const PointArray<T>& source):Array<T>::Array(source){
}

template <typename T=Point>
PointArray<T>& PointArray<T>::operator= (const PointArray& source){
    if(this==&source) return *this;
    Array<T>::operator=(source);
    return *this;
}

template<typename T=Point>
double PointArray<T>::Length() const{
    double temp=0.0;
    for(int i=0;i<Array<T>::Size()-1;++i) {
        //temp += Array<T>::operator[](i).Distance(Array<T>::operator[](i + 1));
        temp+=(*this)[i].Distance((*this)[i+1]);
    }
    return temp;
}

#endif