#include "Exceptions.hpp"

std::string OutOfBoundsExceptions::GetMessage() const{
    return "Index " + std::to_string(index) + ' ' + "Is out of bounds\n";
}

std::string SizeMismatchException::GetMessage() const{
    return (index1>index2) ? "Exception thrown Array 1 is bigger":"Exception thrown Array 2 is bigger\n";
}