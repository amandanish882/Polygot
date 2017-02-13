#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
#include <string>

class ArrayException{
    public:
        ArrayException(){}
        virtual ~ArrayException(){}
        virtual std::string GetMessage() const =0;
};

class OutOfBoundsExceptions : public ArrayException {
    public:
        std::string GetMessage() const;
        OutOfBoundsExceptions(){}
        ~OutOfBoundsExceptions(){}
        OutOfBoundsExceptions(int i):index(i){}
    private:
        int index;
};

class SizeMismatchException : public ArrayException{
    public:
        SizeMismatchException(){}
        SizeMismatchException(unsigned int i1,unsigned int i2):index1(i1),index2(i2){}
        ~SizeMismatchException(){}
        std::string GetMessage() const;


    private:
        unsigned int index1;
        unsigned int index2;
};

#endif