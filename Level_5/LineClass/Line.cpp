#include "Line.hpp"
#include "../ShapeClass/Shape.hpp"
#include <iostream>

namespace TK{
    namespace CAD{

        Line::Line(const Point& s,const Point& e):Shape(),start(s),end(e){
            
        }

        Line::Line(const Line& line):Shape(),start(line.start),end(line.end){
            /*start = line.start;
            end = line.end;*/
        }

        std::string Line::ToString() const{
            return "Start point " + start.ToString() + "End point " + end.ToString()+' '+Shape::ToString();
        }

        double Line::Length() const{
            return start.Distance(end);
        }

        Line& Line::operator= (const Line& source){
            if(this==&source) return *this;
            Shape::operator=(source);
            start = source.start;
            end = source.end;
            return *this;
        }

        std::ostream& operator << (std::ostream& os,const Line& source){
            os<<"Start point "<<source.start<<"End point "<<source.end;   
            return os;
        }

        void Line::Draw() const{
            std::cout<<"Draw in Line class\n";
        }
    }
}