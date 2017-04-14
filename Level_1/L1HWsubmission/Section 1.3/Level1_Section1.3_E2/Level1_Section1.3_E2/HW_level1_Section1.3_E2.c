/*Author Tjisana Kerr
a program that calculates the surface of a triangle with one 90 degree angle
*/
#include <stdio.h>

int main(void)
{
	double base = 0;//variable for length of base of triangle
	double height = 0;//variable for length of height of triangle
	double area = 0;//variable for calculated area result
	printf("Enter base\n");
	scanf_s("%lf", &base);
	printf("Enter height\n");
	scanf_s("%lf", &height);
	area = 0.5*base*height;
	printf("Area of trianlge = %g\n", area);
	return 0;
}