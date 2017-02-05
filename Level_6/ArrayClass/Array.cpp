#ifndef ARRAY_CPP
#define ARRAY_CPP

    #include "Array.hpp"
    #include "../Exceptions.hpp"

    namespace TK{
        namespace Containers{
            template <class T>
            unsigned int Array<T>::defaultsz = 4;

            template <class T>
            Array<T>::Array(const Array& source):sz(source.sz),m_data(new T[sz]){
                for(int i=0;i<source.sz;++i)
                    m_data[i] = source.m_data[i];
            }

            template <class T>
            Array<T>& Array<T>::operator = (const Array& source){
                if(this==&source) return *this;
                sz = source.sz;
                m_data = new T[sz];
                for(int i=0;i<sz;++i)
                    m_data[i] = source.m_data[i];
                return *this;
            }

            template <class T>
            void Array<T>::SetElement(int index,const T& point){
                if(index>=sz || index<0)
                    throw OutOfBoundsExceptions(index);
                else
                    m_data[index] = point;
            }

            template <class T>
            T& Array<T>::GetElement(int index) const{
                if(index>=sz || index<0)
                    throw OutOfBoundsExceptions(index);
                else
                    return m_data[index];
                //return (index>=sz || index<0) ? m_data[0]:m_data[index];
            }

            template <class T>
            T& Array<T>::operator [] (int index){
                if(index>=sz || index<0)
                    throw OutOfBoundsExceptions(index);
                else
                    return m_data[index];
            }

            template <class T>
            const T& Array<T>::operator [] (int index) const{
                if(index>=sz || index<0){
                    throw OutOfBoundsExceptions(index);
                }
                else
                    return m_data[index];
                //necessary for const opjects
            }

            template <class T>
            unsigned int Array<T>::defaultSZ() {
                return Array<T>::defaultsz;
            }

            template <class T>
            void Array<T>::defaultSZ(unsigned int size){
                Array<T>::defaultsz = size;
            }
        }
    }

#endif