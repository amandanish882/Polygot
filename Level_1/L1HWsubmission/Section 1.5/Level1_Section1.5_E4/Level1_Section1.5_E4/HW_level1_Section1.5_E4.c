/*Author Tjisana Kerr
a recursive function printnumber() which gets the number to be printed
*/
#include <stdio.h>

void printnumber(int n)
{
	
	if (n<0)// if negative number, then output minus sign and change number to positive.
	{
		putchar(45);
		n = -n;
	}
	
	if (n!=0)
	{		
		printnumber(n / 10);
		
		putchar('0' + (n % 10));
	}
	
}
int main(void)
{
	printnumber(127);
	return 0;
}