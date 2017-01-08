#include <stdio.h>

struct Article{
    long int articleNumber;
    int quantity;
    char description[21];
};

void printArticle(struct Article* article){
    printf("Article number %ld\nArticle quantity %d\nArticle description %s\n",article->articleNumber,article->quantity,article->description);
}

int main(int argc,char** argv){
    struct Article article = {1,4,"Tjisana's life"};

    //function pointer
    void (*pnt)(struct Article*);
    pnt = printArticle;
    //printArticle(&article);
    pnt(&article);
    return 0;
}