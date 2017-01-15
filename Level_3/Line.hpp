#ifndef LINEHPP
#define LINEHPP

#include "Point.hpp"
#include <string>

class Line{
    private:
        Point start;
        Point end;
    public:        
        Line():start(0,0),end(0,0){}
        Line(const Point& s,const Point& e);
        Line(const Line& line);
        virtual ~Line(){}

        //getters
        Point Start() const {return start;};
        Point End() const {return end;};

        //setters
        void Start(const Point& point){ start = point;};
        void End(const Point& point) {end = point;};

        std::string ToString() const; 
        double Length() const;
        

};

#endif