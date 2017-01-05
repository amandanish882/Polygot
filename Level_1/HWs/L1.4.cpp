#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char c,prevChar;
  int cntNewlines=0,cntWords=0,cntChars=0,cntSpaces=0;
  const int exitcode = EOF;

  while ((c=getchar()) != exitcode) {
    ++cntChars;
    switch (isalnum(c)) { //outer switch
      case 0://is NOT alphanumeric
        switch(c){
          case '\n':
            ++cntNewlines;
            break;
          case ' ':
            ++cntSpaces;
            break;
        }
        break;
      default://is alphanumeric
        if(prevChar==' ' || prevChar=='\n' )
          ++cntWords;
        break;
    }    
    prevChar = c;
  }
  if(c==exitcode && isalnum(prevChar))
    ++cntWords;

  printf("\nNewLines %d\nSpaces %d\nWords %d\nCharacters %d\n",cntNewlines,cntSpaces,cntWords,cntChars );
  return 0;
}
