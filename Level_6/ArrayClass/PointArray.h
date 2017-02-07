//
// Created by desktop on 2/6/17.
//

#ifndef ARRAYCLASS_POINTARRAY_H
#define ARRAYCLASS_POINTARRAY_H

#include "Point.hpp"
#include "Array.hpp"

using namespace TK::CAD;
using namespace TK::Containers;

template<typename T=Point>
class PointArray : public Array {
    public:
        PointArray();
        ~PointArray();
        PointArray(int size);
        PointArray(const PointArray& source);
        PointArray& operator= (const PointArray& source);
        double Length() const;
};


#endif //ARRAYCLASS_POINTARRAY_H
