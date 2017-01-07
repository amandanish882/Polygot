//Author Tjisana Kerr - Level 2 Section 1.9 Exercise 1
//Source code
//C-program that reads the characters from the keyboard and shows them on screen
#include <stdio.h>

int main(void)
{
	int c;
	while ((c=getchar())!=1)//test that c is not equal to ^A
	{
		if (c != '\n') //test for a newline. If c is not equal to a newline, putchar will print c to the console.
		{
			putchar(c);
		}		
	}
	printf("CTRL + A is a correct ending.\n");
	return 0;
}