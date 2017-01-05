/*Author Tjisana Kerr
a C-program that counts how many times each of the numbers 0-4 have been typed.
*/
#include <stdio.h>

int main(void)
{
	char c; //variable to read character from console
	int counter0 = 0;// counter for number 0
	int counter1 = 0;// counter for number 1
	int counter2 = 0;// counter for number 2
	int counter3 = 0;// counter for number 3
	int counter4 = 0;// counter for number 4
	int countOther = 0;//counter for number of characters that are NOT  0-4
	printf("Enter numbers(end input by entering ^Z)\n");
	c = getchar();

	while (c!=26 && c!= EOF)
	{
		switch (c)
		{
		case '0':
			counter0++; break;
		case '1':
			counter1++; break;
		case '2':
			counter2++; break;
		case '3':
			counter3++; break;
		case '4':
			counter4++; break;
		default:
			countOther++;
		}
		c = getchar();
	}
	printf("Number of 0s: %d\n",counter0);
	printf("Number of 1s: %d\n", counter1);
	printf("Number of 2s: %d\n", counter2);
	printf("Number of 3s: %d\n", counter3);
	printf("Number of 4s: %d\n", counter4);
	printf("Number of characters other than 0-4: %d\n", countOther);
	return 0;
}
