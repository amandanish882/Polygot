#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <stdlib.h>
#include <string>

class Shape{
    public:
        Shape():id(rand()){}
        virtual ~Shape(){}
        Shape(const Shape& source):id(source.id){}
        Shape& operator = (const Shape& source);
        virtual std::string ToString() const;
        int ID() const{return id;};
        virtual void Draw() const =0;
        void Print() const;

        private:
            int id;

};

#endif