//
// Created by desktop on 1/29/17.
//

#ifndef TESTCLION_ARRAY_H
#define TESTCLION_ARRAY_H

namespace TK {
    namespace Containers{
        template<typename T> class Array {
        private:
            int sz;
            T* m_data;
            static unsigned int defaultsize;
        public:
            Array<T>():sz(defaultsize),m_data(new T[sz]){}
            Array<T>(int size):sz(size),m_data(new T[sz]){}
            Array<T>(const Array<T>& source);
            virtual ~Array<T>(){delete[] m_data;}

            int Size() const;
            void SetElement(int index,const T& var);
            T& GetElement(int index) const;

            //operator overloading
            Array<T>& operator = (const Array<T>& source);
            T& operator [] (int index);
            const T& operator [] (int index) const;

        };
    }
}


#endif //TESTCLION_ARRAY_H
