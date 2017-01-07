#include <stdio.h>

void swap(int* var1, int* var2);

int main(int argc,char** argv){
    int a=31,b=32;
    swap(&a,&b);
    printf("%d\n",a);
    return 0;
}

void swap(int* var1, int* var2){
    int temp=0;
    temp=*var2;
    *var2 = *var1;
    *var1 = temp;
}