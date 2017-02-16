//
// Created by desktop on 2/16/17.
//

#ifndef ARRAYCLASS_STACKEXCEPTION_H
#define ARRAYCLASS_STACKEXCEPTION_H
#include <iostream>
#include <string>

class StackException {
    public:
        StackException(){}
        virtual ~StackException(){}
        virtual std::string GetMessage() const =0;
};

class StackFullException : public StackException{
    public:
        StackFullException():StackException(){}
        std::string GetMessage() const{ return "StackFull Exception\n";}
        virtual ~StackFullException(){}
};

class StackEmptyException : public StackException{
    public:
    StackEmptyException():StackException(){}
    std::string GetMessage() const{ return "StackEmpty Exception\n"; }
    virtual ~StackEmptyException(){}
};

#endif //ARRAYCLASS_STACKEXCEPTION_H
