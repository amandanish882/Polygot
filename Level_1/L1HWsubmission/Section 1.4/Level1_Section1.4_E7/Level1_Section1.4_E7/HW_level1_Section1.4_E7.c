/*Author Tjisana Kerr
the frequency of number 3 is shown in words.
*/
#include <stdio.h>

int main(void)
{
	char c; //variable to read character from console
	int counter3 = 0;// counter for number 3
	printf("Enter numbers (end input by entering ^Z)\n");
	c = getchar();

	while (c!=26 && c!= EOF)
	{
		if (c=='3')
		{
			counter3++;
		}
		c = getchar();
	}

	switch (counter3)
	{
	case 0:
		printf("Number 3 appears zero times\n"); break;
	case 1:
		printf("Number 3 appears one time\n"); break;
	case 2:
		printf("Number 3 appears two times\n"); break;
	default:
		printf("The number 3 appears more than two times\n"); break;
	}

	
	return 0;
}
