#include <stdio.h>

double add(double d1, double d2){
    return d1+d2;
}

double subtract(double d1, double d2){
    return d1-d2;
}

void printName(char* name){
    printf("Hello %s\n",name);
}

int main(int argc,char** argv){

    //two ways to declare and assign function pointers
    double (*pnt1)(double,double) = &add;
    double (*pnt2)(double,double) = subtract;
    void (*charpnt)(char*) = printName;

    //two ways to use function pointer
    printf("%f\n",(*pnt1)(3.2,4.4)    );
    printf("%f\n",pnt2(5.5,6.6)    );
    charpnt("Tjisana");
    return 0;
}