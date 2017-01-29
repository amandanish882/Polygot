#ifndef POINTHPP
#define POINTHPP

#include <string>
#include <iostream>
#include "../ShapeClass/Shape.hpp"

namespace TK{
    namespace CAD{
        class Point : public Shape{
            private:
                double m_x;
                double m_y;
            public:
                Point();
                Point(double x,double y);
                explicit Point(double d);
                Point(const Point& point);
                virtual ~Point();
                double X() const {return m_x;}
                double Y() const {return m_y;}
                void X(double x);
                void Y(double y);
                std::string ToString() const;
                void Draw() const;

            //functions
            double Distance() const;
            double Distance(const Point& p) const;

            //operator overloading
            Point operator - () const;
            Point operator * (double factor) const;
            Point operator + (const Point& p) const;
            bool operator == (const Point& p) const;
            Point& operator = (const Point& source);
            Point& operator *= (double factor);

            //global function overloading
            friend std::ostream& operator << (std::ostream& os, const Point& point);
        };
    }
}

#endif