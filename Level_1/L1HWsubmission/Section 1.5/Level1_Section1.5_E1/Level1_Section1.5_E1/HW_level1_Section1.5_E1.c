/*Author Tjisana Kerr
a C-program that calls a function minus()
*/

#include <stdio.h>

double minus(double var1, double var2)
{
	return var1 - var2;
}
int main(void)
{
	double a = 10, b = 1;
	printf("Difference is %f\n", minus(a, b));
	return 0;
}