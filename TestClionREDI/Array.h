//
// Created by kerrt on 1/30/17.
//

#ifndef TESTCLIONREDI_ARRAY_H
#define TESTCLIONREDI_ARRAY_H

namespace TK{
    namespace Container {

        template<typename T>
        class Array {
        private:
            unsigned int size;
            unsigned int static defaultsize;
            T* data;
        public:
            Array();
            Array(unsigned int arraysize);
            virtual ~Array();
            Array(const Array& source);
            Array& operator= (const Array& source);
            T& operator[] (int index);
            const T& operator[] (int index) const;
            unsigned int Size() const;

        };

    }
}
#endif //TESTCLIONREDI_ARRAY_H
