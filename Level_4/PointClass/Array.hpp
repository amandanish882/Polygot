#ifndef ARRAYHPP
#define ARRAYHPP

#include "Point.hpp"

class Array{
    private:
        int sz;
        Point* m_data;
        
    public:
        Array():sz(10),m_data(new Point[sz]){}
        Array(int size):sz(size),m_data(new Point[sz]){}
        Array(const Array& source);
        virtual ~Array(){delete[] m_data;}
        int Size() const{return sz;}        
        void SetElement(int index,const Point& point);
        Point& GetElement(int index) const;

        //operator overloading
        Array& operator = (const Array& source);
        Point& operator [] (int index);
        const Point& operator [] (int index) const;
};


#endif