/* Calculate the length of a string */
#include <stdio.h>
#define MAXLINE 30
// String lenght declaration
int Length(char str[]);
int main(){
    char string[MAXLINE+1];
    int c;
    int i=0;
    // Line of maxium 30 chars + \0
    // The input character
    // The counter
    // Print intro text
    printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
    // Get the characters
    while ((c=getchar())!=EOF && i<MAXLINE){
    // Append entered character to string
    string[i++]=(char)c;
    }
    string[i]='\0';
    printf("\nString length is %d\n", Length(string));
    return 0;
}

int Length(char str[]){
    int cnt=0;
    while(*(str++) != '\0')
        ++cnt;
    return cnt;
}