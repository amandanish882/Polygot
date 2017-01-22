#include "Array.hpp"
#include "../PointClass/Point.hpp"

int main(int argc,char** argv){
    const TK::Containers::Array arr(2);
    std::cout<<arr[0];
    return 0;
}