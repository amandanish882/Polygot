//
// Created by desktop on 2/5/17.
//

#ifndef ARRAYCLASS_NUMERICARRAY_H
#define ARRAYCLASS_NUMERICARRAY_H

#include "Array.hpp"

namespace TK{
    namespace Containers{
        template<class T>
        class NumericArray : public Array<T> {
            public:
                NumericArray();
                NumericArray(unsigned int size);
                virtual ~NumericArray();
                NumericArray(const NumericArray& numericArray);
                NumericArray& operator= (const NumericArray& numericArray);
                NumericArray operator* (double factor) const;
                NumericArray operator+ (const NumericArray& numericArray) const;
                double dotproduct(const NumericArray& numericArray) const;

        };
    }
}

#endif //ARRAYCLASS_NUMERICARRAY_H
