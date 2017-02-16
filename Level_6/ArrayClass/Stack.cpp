//
// Created by desktop on 2/15/17.
//

#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"
#include "StackException.h"

using namespace TK::Containers;

template<typename T>
Stack<T>::Stack() {}

template<typename T>
Stack<T>::~Stack() {}

template<typename T>
Stack<T>::Stack(unsigned int size): array(size),m_current(0){
}

template<typename T>
Stack<T>::Stack(const Stack& source):array(source.array),m_current(source.m_current){}

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack &source) {
    if(this==&source) return *this;
    array = source.array;
    m_current = source.m_current;
    return *this;
}

template <typename T>
void Stack<T>::Push(const T& source){
    try {
        array[m_current] = source;
        ++m_current;
    }
    catch(ArrayException& err){
        throw StackFullException();
    }
}

template<typename T>
T Stack<T>::Pop(){
    try {
        T temp = array[m_current - 1];
        --m_current;
        return temp;
    }
    catch(ArrayException& err){
        m_current=0;
        throw StackEmptyException();

    }
}
#endif