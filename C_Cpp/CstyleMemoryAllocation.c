#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int* p = (int*)malloc(10*sizeof(int));
    int* p1= NULL;
    printf("%d\n",p1);
    if(p){
        free(p);
        printf("memory allocated\n");
    }
    return 0;
}

//using the code below, we can print out the content of a file called text.txt. Assume the code below compiles to create a file called CsytleMemoryAllocation
//then run the file by typing "./CsytleMemoryAllocation < test.txt"

// int main(){
//     int c;
//     while ((c = getchar()) != EOF){
//         putchar(c);
//     }
// }