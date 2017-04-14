//Author Tjisana Kerr - Level 2 Section 1.8 Exercise 1
//Source code
//C-program that prints the contents of a struct called Article

#include <stdio.h>
#include <string.h>

/*definition of struct.
 members are article number, quantity and description
*/
struct Article
{
	unsigned int ArticleNumber;
	unsigned int Quantity;
	char Desc[];
};

void printStruct(struct Article*); //function declaration to print Struct

int main(void)
{
	struct Article myArticle = {100,1,"Lisboa"}; //definition and initialization of struct Article
	printStruct(&myArticle); //print Struct
	return 0;
}

void printStruct(struct Article* var) // function implementation to print Struct. Makes use of pointer argument.
{
	printf("Article number is : %d\n", var->ArticleNumber);
	printf("Quantity is : %d\n", var->Quantity);
	printf("Description is : %s\n", var->Desc);
}