#include "Point.hpp"

using namespace TK::CAD;

int main(int argc,char** argv){
    const int MAX = 3;
    Point** arrPoint = new Point*[MAX];    
    for(int i=0;i<MAX;++i){
        //*(arrPoint++) = new Point(2.2+i,3.3+i); something is wrong with this
        arrPoint[i] = new Point(2.2+i,3.3+i);
    }
    for(int i=0;i<MAX;++i){
        std::cout<<*arrPoint[i];
        delete arrPoint[i];
    }
    
    delete[] arrPoint;
    return 0;
}