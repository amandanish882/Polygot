//
// Created by desktop on 2/15/17.
//

#ifndef ARRAYCLASS_STACK_H
#define ARRAYCLASS_STACK_H

#include "Array.cpp"
using namespace TK::Containers;

template<typename T>
class Stack {
    private:
        Array<T> array;
        unsigned int m_current;
    public:
        Stack();
        Stack(unsigned int size);
        virtual ~Stack();
        Stack(const Stack& source);
        Stack& operator= (const Stack& source);
        void Push(const T& source);
        T Pop();

};


#endif //ARRAYCLASS_STACK_H
