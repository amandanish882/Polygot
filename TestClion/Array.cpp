//
// Created by desktop on 1/29/17.
//

#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "Array.h"
#include "Exceptions.hpp"

    //namespace TC = TK::Containers; //Way 1
    //using namespace TK::Containers; //Way 2

namespace TK {
    namespace Containers {

        template<typename T>
        unsigned int Array<T>::defaultsize = 4;

        template<typename T>
        Array<T>::Array(const Array<T> &source):sz(source.sz), m_data(new T[sz]) {
            for (int i = 0; i < source.sz; ++i)
                m_data[i] = source.m_data[i];
        }

        template<typename T>
        int Array<T>::Size() const {
            return sz;
        }

        template<typename T>
        void Array<T>::SetElement(int index, const T &var) {
            if (index >= sz || index < 0)
                throw OutOfBoundsExceptions(index);
            else
                m_data[index] = var;
        }

        template<typename T>
        T& Array<T>::GetElement(int index) const {
            if (index >= sz || index < 0)
                throw OutOfBoundsExceptions(index);
            else
                return m_data[index];
        }

        template<typename T>
        Array<T>& Array<T>::operator = (const Array<T>& source){
            if(this==&source) return *this;
            delete[] m_data;
            m_data = new T[source.sz];
            sz = source.sz;

            for (int i = 0; i < sz; ++i)
            {
                m_data[i] = source.m_data[i];
            }
            return *this;
        }

        template<typename T>
        T& Array<T>::operator [] (int index){
            if (index >= sz || index<0) throw OutOfBoundsExceptions(index);
            return m_data[index];
        }

        template<typename T>
        const T& Array<T>::operator [] (int index) const{
            if (index >= sz || index<0) throw OutOfBoundsExceptions(index);
            return m_data[index];
        }
    }
}

#endif