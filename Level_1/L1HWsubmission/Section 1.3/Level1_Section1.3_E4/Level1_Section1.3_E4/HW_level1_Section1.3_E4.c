/*Author Tjisana Kerr
C-program that uses the fact that 0 (zero) is interpreted as FALSE and non-zero is interpreted as TRUE
*/
#include <stdio.h>

int main(void)
{
	int johnMarried = 0; //variable John not married/False
	int janeMarried = 2;//variable Jane is married/TRUE
	printf("John is %s", (johnMarried) ? "Married\n" : "not Married\n");
	printf("Jane is %s", (janeMarried) ? "Married\n" : "not Married\n");
	return 0;
}