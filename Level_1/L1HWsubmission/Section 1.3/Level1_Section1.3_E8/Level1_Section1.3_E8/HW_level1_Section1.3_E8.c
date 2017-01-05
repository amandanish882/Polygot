/*Author Tjisana Kerr
Assignment operators 
*/
#include <stdio.h>
int main()
{
	int x = 2;
	int y;
	int z;
	x *= 3 + 2;// this evaluates to x = x * (3+ 2); x's original value is 2 thus result is x = 2 * (3+2)
	printf("x=%d\n", x);//x = 10

	x *= y = z = 4;// assignment takes place from right to left. so first z=4, then y=z which is 4, then x=x*y. x is 10 and y is 4
	//equation reduces to x = 10 * 4
	printf("x=%d\n", x);//x = 40

	x = y == z;// y==z is a logical operation. the value of y and z are equal so the result is true or 1. the equation then reduces
	// to x=1
	printf("x=%d\n", x);//x = 1

	return 0;
}