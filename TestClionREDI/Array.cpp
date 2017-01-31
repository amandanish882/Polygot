//
// Created by kerrt on 1/30/17.
//

#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "Array.h"

namespace TK{
    namespace Container{
        template<typename T>
        unsigned int Array<T>::defaultsize = 31;

        template<typename T>
        Array<T>::Array() {}

        template<typename T>
        Array<T>::~Array() {
            delete[] data;
        }

        template<typename T>
        Array<T>::Array(unsigned int arraysize):size(arraysize),data(new T[size]){
        }

        template<typename T>
        Array<T>::Array(const Array& source):size(source.size),data(new T[source.size]){
            for(int i=0;i<source.size;++i)
                data[i] = source.data[i];
        }

        template<typename T>
        Array<T>& Array<T>::operator= (const Array& source){
            if(this==&source) return *this;

            delete[] data;
            size = source.size;
            data = new T[source.size];
            for(int i=0;i<source.size;++i)
                data[i] = source.data[i];
        }

        template<typename T>
        T& Array<T>::operator[] (int index){
            if(index <0 || index >=size) throw -1;
            return data[index];
        }

        template<typename T>
        const T& Array<T>::operator[] (int index) const{
            if(index <0 || index >=size) throw -1;
            return data[index];
        }

        template<typename T>
        unsigned int Array<T>::Size() const{
            return size;
        }

    }
}

#endif