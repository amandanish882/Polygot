#include "Array.hpp"
#include "../PointClass/Point.hpp"
#include "../Exceptions.hpp"
#include <iostream>

namespace TK{
    namespace Containers{
        Array::Array(const Array& source):sz(source.sz),m_data(new Point[sz]){
            for(int i=0;i<source.sz;++i)
                m_data[i] = source.m_data[i];
        }

        Array& Array::operator = (const Array& source){
            if(this==&source) return *this;
            sz = source.sz;
            m_data = new Point[sz];
            for(int i=0;i<sz;++i)
                m_data[i] = source.m_data[i];
            return *this;
        }

        void Array::SetElement(int index,const Point& point){
            if(index>=sz || index<0) 
                throw OutOfBoundsExceptions(index);
            else 
                m_data[index] = point;                
        }

        Point& Array::GetElement(int index) const{
            if(index>=sz || index<0) 
                throw OutOfBoundsExceptions(index);
            else 
                return m_data[index];    
            //return (index>=sz || index<0) ? m_data[0]:m_data[index];    
        }

        Point& Array::operator [] (int index){
            if(index>=sz || index<0) 
                throw OutOfBoundsExceptions(index);            
            else 
                return m_data[index];    
        }

        const Point& Array::operator [] (int index) const{
            if(index>=sz || index<0){
                throw OutOfBoundsExceptions(index);                
            }
            else 
                return m_data[index];
            //necessary for const opjects
        }
    }
}