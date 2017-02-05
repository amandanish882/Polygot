#ifndef ARRAYHPP
#define ARRAYHPP

#include "../PointClass/Point.hpp"
using namespace TK::CAD;

namespace TK{
    namespace Containers{
        template <class T>
        class Array{
            private:
                int sz;
                T* m_data;
                
            public:
                Array():sz(10),m_data(new T[sz]){}
                Array(int size):sz(size),m_data(new T[sz]){}
                Array(const Array& source);
                virtual ~Array(){delete[] m_data;}
                int Size() const{return sz;}        
                void SetElement(int index,const T& point);
                T& GetElement(int index) const;

                //operator overloading
                Array& operator = (const Array& source);
                T& operator [] (int index);
                const T& operator [] (int index) const;
        };
    }
}

#endif