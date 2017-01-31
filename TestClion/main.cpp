#include <iostream>
#include "Array.cpp"

using namespace TK::Containers;

int main() {
    Array<int> arrint(4);
    for(int i=0;i<4;++i)
        arrint[i] = i;

    return 0;
}