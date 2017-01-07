#include <stdio.h>

double add(int v1, int v2){
    return v1+v2;
}

int main(int argc,char** argv){
    double (*pnt) (int,int) = &add;
    printf("%f\n",(*pnt)(2,3));
    return 0;
}