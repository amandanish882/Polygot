//Author Tjisana Kerr - Level 2 Section 1.6 Exercise 2
//Source code
//Macros MAX2 and MAX3 are defined in the Defs.h file
//MAX2 finds the maximum of variables a and b, MAX2 finds the maximum of variables a,b and c

#include "Defs.h"
#include <stdio.h>
int main()
{
	int a = 4, b = 5, c = 6;
	printf("%d\n", MAX2(a,b));
	printf("%d\n", MAX3(a,b,c));
	return 0;
}