#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
    if(argc==1){
        printf("Usage: FileOperations file.txt\n");
        exit(1);
    }
    //printf("%s",argv[1]);

    FILE* file = fopen(argv[1],"r");
    if(!file){
        printf("No such file\n");
        exit(1);
    }

    fclose(file);
    return 0;
}