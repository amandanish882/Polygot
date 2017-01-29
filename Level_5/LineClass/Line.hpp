#ifndef LINEHPP
#define LINEHPP

#include "../PointClass/Point.hpp"
#include "../ShapeClass/Shape.hpp"
#include <string>
#include <iostream>

namespace TK{
    namespace CAD{
        class Line: public Shape{
            private:
                Point start;
                Point end;
            public:        
                Line():Shape(),start(0,0),end(0,0){}
                Line(const Point& s,const Point& e);
                Line(const Line& line);
                virtual ~Line(){}
                void Draw() const;

                //getters
                Point Start() const {return start;};
                Point End() const {return end;};

                //setters
                void Start(const Point& point){ start = point;};
                void End(const Point& point) {end = point;};

                std::string ToString() const; 
                double Length() const;

                //operator overloading
                Line& operator= (const Line& source);
                friend std::ostream& operator << (std::ostream& os,const Line& source);

        };
    }
}

#endif