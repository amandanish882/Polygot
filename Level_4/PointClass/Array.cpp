#include "Array.hpp"
#include "Point.hpp"
#include <iostream>

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
    if(index<sz)
        m_data[index] = point;
}

Point& Array::GetElement(int index) const{
    return (index>=sz || index<0) ? m_data[0]:m_data[index];    
}

Point& Array::operator [] (int index){
    return (index>=sz  || index<0) ? m_data[0]:m_data[index];    
}

const Point& Array::operator [] (int index) const{
    return (index>=sz  || index<0) ? m_data[0]:m_data[index]; //necessary for const opjects
}