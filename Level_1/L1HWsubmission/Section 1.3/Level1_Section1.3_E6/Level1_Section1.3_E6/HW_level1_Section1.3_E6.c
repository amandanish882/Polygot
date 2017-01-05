/*Author Tjisana Kerr
a C-program that shifts any number two places to the right
*/
#include <stdio.h>
int main()
{
	int userInput;//variable for user input
	int result;//variable to store result of operation
	printf("Enter integer : ");
	scanf_s("%d", &userInput);
	result = userInput >> 2;
	printf("Result after shift: %d\n", result);
	printf("%s\n", (userInput > 0) ? "Logical shift, 0 inserted from left" : "Arithmetic shift, 1 inserted from right");
	return 0;
}

