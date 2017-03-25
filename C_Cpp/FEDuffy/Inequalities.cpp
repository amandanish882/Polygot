//
// Created by desktop on 3/25/17.
//

#include "Inequalities.h"

template <typename T>
T Max(const T& x,const T& y){
    return x>y ? x:y;
}

template <typename T>
T Min(const T& x,const T& y){
    return x<y ? x:y;
}

template<typename T>
T Max(const T& x,const T& y,const T& z){
    return Max<T>(Max<T>(x,y),z);
}

template<typename T>
T Min(const T& x,const T& y,const T& z){
    return Min<T>(Min<T>(x,y),z);
}