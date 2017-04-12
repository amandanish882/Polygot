/*Author Tjisana Kerr
Predict what will be printed on screen
*/
#include <stdio.h>
int main()
{
	int x;
	x = -3 + 4 * 5 - 6;// x = -3 + (4*5) - 6 
	//then x = -3 + 20 - 6
	printf("x=%d\n", x); // Output: x=11

	x = 3 + 4 % 5 - 6; //x = 3 + (4 % 5) - 6; 
	//then x = 3 + 4 - 6
	printf("x=%d\n", x); // Output: x=1

	x = -3 * 4 % -6 / 5;//all operators have the same priority so evaluation takes place from left to right
	// x = -12 % -6 /5 ;
	//then x = 0/5
	printf("x=%d\n", x); // Output: x=0

	x = (7 + 6) % 5 / 2; //() have the highest priority, then rest of equation is calculated from left to right since
	// % and / have the same priority; x = (13) % 5 /2 ; x = 3/2
	printf("x=%d\n", x); // Output: x=1


	return 0;
}