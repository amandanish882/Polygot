#include "Array.hpp"
#include "Point.hpp"

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

void Array::SetElement(int element,const Point& point){
    if(element>=sz) return;

}
//Point GetElement(int element) const;