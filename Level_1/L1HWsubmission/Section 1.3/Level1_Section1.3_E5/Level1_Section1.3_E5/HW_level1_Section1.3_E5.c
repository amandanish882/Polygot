/*Author Tjisana Kerr
a C-program that clearly shows the difference between --i and i--.
*/
#include <stdio.h>

int main(void)
{
	int i = 1;
	printf("i = %d\n", i);
	int prefix = ++i; //variable to illustrate prefix
	printf("Prefix = ++i;prefix = %d\n", prefix);

	i = 1;
	printf("i = %d\n", i);
	int post = i++; //variable to illustratre post
	printf("post = i++;post = %d\n", post);
	return 0;
}