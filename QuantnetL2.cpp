#include <stdio.h>

void pointerfunction(int* a);
void referencefunction(int& a);

int main(int argc, char** argv){
    int temp=31;
    pointerfunction(&temp);
    printf("%d\n",temp);
    return 0;
}

void pointerfunction(int* a){
    printf("%d\n",*a);
    *a=69;
}

void referencefunction(int& a){
    printf("%d",a);
}