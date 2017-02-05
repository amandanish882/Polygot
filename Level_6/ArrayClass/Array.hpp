#ifndef ARRAYHPP
#define ARRAYHPP

namespace TK{
    namespace Containers{
        template <class T>
        class Array{
            private:
                unsigned int sz;
                static unsigned int defaultsz;
                T* m_data;
                
            public:
                Array():sz(defaultsz),m_data(new T[sz]){}
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

                //static functions
                static unsigned int defaultSZ();
                static void defaultSZ(unsigned int size);
        };
    }
}

#endif