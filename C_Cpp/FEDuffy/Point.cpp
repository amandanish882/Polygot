//
// Created by desktop on 3/25/17.
//

#include "Point.h"
#include <sstream>

Point Point::OriginPoint = Point(2.0,3.0);

Point& Point::getOriginPoint() {
    return OriginPoint;
}

std::ostream& operator<<(std::ostream& os,const Point& point) {
    os<<"x: "<<point.x<<" "<<"y: "<<point.y;
    return os;
}
