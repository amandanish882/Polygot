#include "Templates.hpp"

template <class Numeric>
Numeric Max(const Numeric& numeric, const Numeric& numeric1){
    if(numeric > numeric1)
        return numeric;
    return numeric1;
}

template <class Numeric>
Numeric Min(const Numeric& numeric, const Numeric& numeric1){
    if(numeric<numeric1)
        return numeric;
    return numeric1;
}