#ifndef CIRCLEHPP
#define CIRCLEHPP

#include "../PointClass/Point.hpp"
#include "../LineClass/Line.hpp"
#include <string>

namespace TK{
    namespace CAD{
        class Circle{
            private:
                Point center;
                double radius;
            public:
                Circle(){};
                Circle(double radius,const Point& center);
                Circle(const Circle& circle); 
                virtual ~Circle(){}

                //getters
                Point Center() const;
                double Radius() const;

                //setters
                void Center(const Point& point){center = point;};
                void Radius(const double radius){this->radius = radius;}

                //other functions
                double Diameter() const;
                double Area() const;
                double Circumference() const;
                std::string ToString() const;

                //operator overloading
                Circle& operator = (const Circle& source);
                friend std::ostream& operator << (std::ostream& os,const Circle& source);

        };
    }//end of CAD namespace
}//end of TK namespace
#endif