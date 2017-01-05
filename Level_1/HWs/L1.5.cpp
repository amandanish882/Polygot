#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(int argc, char** argv){
    if(argc<2){
        printf("Not enough arguments\n");
        exit(1);
    }
    printf("%d\n",factorial(atoi(argv[1])));
    return 0;
}

int factorial(int num){
    if(num==1 || num==0)
        return 1;
    return num * factorial(num-1);
}