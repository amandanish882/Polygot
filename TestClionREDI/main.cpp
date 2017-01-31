#include <iostream>
#include "Array.cpp"

using namespace TK::Container;

int main(int argc, char** argv) {
    Array<int> arr(4);
    arr[1] = 29;
    std::cout<<arr[1] << '\n';
    return 0;
}