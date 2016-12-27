#include <stdio.h>

inline double TriangleSurface(const double& base,const double& height){
    return base * height * 0.5;
}

int main(int arc,char** argc){
    printf("Enter base and height ");
    double base=0.0; 
    scanf("%lf",&base);
    double height=0.0;
    scanf("%lf",&height);
    printf("%g\n",TriangleSurface(base,height));
    return 0;
}