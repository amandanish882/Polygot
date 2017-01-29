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

#endif