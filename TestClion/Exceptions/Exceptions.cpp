#include "Exceptions.hpp"

std::string OutOfBoundsExceptions::GetMessage() const{
    return "Index " + std::to_string(index) + ' ' + "Is out of bounds\n";
}