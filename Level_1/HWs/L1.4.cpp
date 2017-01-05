#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char c;
  int cntNewlines=0,cntWords=0,cntChars=0,cntSpaces=0;
  const int exitcode = EOF;

  while ((c=getchar()) != exitcode) {
    ++cntChars;
    switch (isalnum(c)) { //outer switch
      case 0://is alphanumeric
        break;
      default:
        switch (c) {//inner switch
          case '\n':
            ++cntNewlines;
            break;
          case ' ':
            ++cntSpaces;
            break;
        }
        break;

    }
    // switch (c) {
    //   case '\n':
    //     ++cntNewlines;
    //     break;
    //   case ' ':
    //     ++cntSpaces;
    //     ++cntWords;
    //     break;
    // }
  }

  printf("NewLines %d\nSpaces %d\nWords %d\nCharacters %d\n",cntNewlines,cntSpaces,cntWords,cntChars );
  return 0;
}
