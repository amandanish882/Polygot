/* Author Tjisana Kerr
Conditional expressions 
*/
#include <stdio.h>
int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	x += y += x;// assignment takes places from right to left
	//first y = y+x. Therefore y = 1+ 1. y=2
	//second x = x+y. Therefore x = 1 +2. x = 3

	printf("%d\n\n", (x<y) ? y : x); // Number 1
	//x<y reduces to false. since x=3 and y=2. the false part of the expression is printed. which is x

	printf("%d\n", (x<y) ? x++ : y++); // Number 2
	//x<y reduces to false, since x=3 and y=2. the false part of the expressioin is printed. which is y++.
	//this is equal to y=y+1. But this is the post implementation, which means the value that will be outputted will be the value before
	//increment

	printf("%d\n", x); // Number 3
	// the value of x was never changed after it took the value of y in the statement x += y += x;

	printf("%d\n", y); // Number 4
	//the value of y was changed in the line printf("%d\n", (x<y) ? x++ : y++);
	//y++ is equal to y=y+1. 
	//y = 2+1
	return 0;
}