#include "Line.hpp"

Line::Line(const Point& s,const Point& e):start(s),end(e){
    
}

Line::Line(const Line& line):start(line.start),end(line.end){
    /*start = line.start;
    end = line.end;*/
}

std::string Line::ToString() const{
    return "Start point " + start.ToString() + "End point " + end.ToString();
}

double Line::Length() const{
    return start.Distance(end);
}

Line& Line::operator= (const Line& source){
    if(this==&source) return *this;
    start = source.start;
    end = source.end;
    return *this;
}

std::ostream& operator << (std::ostream& os,const Line& source){
    os<<"Start point "<<source.start<<"End point "<<source.end;   
    return os;
}