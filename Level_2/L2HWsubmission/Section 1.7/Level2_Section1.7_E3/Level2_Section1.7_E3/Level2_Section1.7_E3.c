/* Predict what will be printed on the screen */
#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[] = { 0, 1, 2, 3, 4 };
int main()
{
	int i;
	int* p;
	for (i = 0; i <= 4; i++) PRD(a[i]); // 1
	/*Console output is :  01234
	For loop prints one element at time from array a*/

	NL; //prints new line

	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // 2
	/*Console output is :  01234
	pointer 'p' stores the address of each element in array 'a' one at a time in each iteration. PRD prints the pointer 'p' dereferenced
	*/

	NL;
	NL;


	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // 3
	/*Console output is :  01234
	pointed 'p' is set to the first element in array 'a'. PRD prints the indexed pointer 'p' */

	NL;

	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // 4	
	//Console output is :  024
	/*
	a	i	p++	i++	p+i	a+4
	0	0			0	4
	1	1	1	1	2	4
	2	2	2	2	4	4
	3	3				4
	4	4				4

	*/
	NL;
	NL;

	for (p = a + 4; p >= a; p--) PRD(*p); // 5
	//Console output is :  43210
	//sets the pointer 'p' to the final element in array 'a' then prints the preceeding elements 
	NL;

	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); // 6
	//Console output is :  43210
	//sets the pointer 'p' to the final element in array 'a' then uses a negative index to access the preceeding elements 
	NL;

	for (p = a + 4; p >= a; p--) PRD(a[p - a]); // 7
	//Console output is :  43210
	//sets the pointer 'p' to the final element in array 'a' then uses a formulaic exression to get the index value of array 'a'
	NL;

	return 0;
}