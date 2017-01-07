#include <stdio.h>

#define PRD(a) printf("%d", (a))
#define NL printf("\n");

int a[] ={0,1,2,3,4};

int main(int argc,char** argv){ 
    int i=0;
    int* p;

    for(i=0;i<=4;++i) PRD(a[i]);
    NL;

    return 0;
}