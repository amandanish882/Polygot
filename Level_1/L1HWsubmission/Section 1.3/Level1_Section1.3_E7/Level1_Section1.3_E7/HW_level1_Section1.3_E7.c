/*Author Tjisana Kerr
a C-program that efficiently multiplies a number by a factor 2 to the power n.
*/
#include <stdio.h>
int main()
{
	int userInput = 0;//variable for user input
	int powerN = 0;//userInput variable will be multiplied by 2 to the power of "powerN"
	int result = 0;//variable for the result of operation
	printf("Enter integer : ");
	scanf_s("%d", &userInput);
	printf("Multiply by 2 to the power of : ");
	scanf_s("%d", &powerN);
	result = userInput << powerN;
	printf("Result : %d\n", result);
	return 0;
}

