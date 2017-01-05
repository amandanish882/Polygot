/*Author Tjisana Kerr
a C-program that prints the factorials of a number.
*/
#include <stdio.h>

int factorial(int inum) 
{
	int temp;
	if (inum == 0)
	{
		return 1;
	}
	temp = inum * factorial(inum - 1);
	return temp;
}

int main(void)
{
	int a = 6;

	if (a < 1)
	{
		printf("Negative numbers not allow!");
	}
	else
	{
		printf("%d! = %d\n", a,factorial(a));
	}
	return 0;
}