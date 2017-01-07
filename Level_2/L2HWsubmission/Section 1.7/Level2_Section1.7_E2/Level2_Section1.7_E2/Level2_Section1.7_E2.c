//Author Tjisana Kerr - Level 2 Section 1.7 Exercise 2
//Source code
/* Calculate the length of a string */

#include <stdio.h>
#define MAXLINE 30
// String length declaration
int Length(char str[]);
int main()
{
	char string[MAXLINE + 1]; // Line of maxium 30 chars + \0
	int c; // The input character
	int i = 0; // The counter
	// Print intro text
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
	// Get the characters
	while ((c = getchar()) != 26 && i<MAXLINE) // Changed EOF to 26, since 26 is ^Z
	{
		// Append entered character to string
		string[i++] = (char)c;
	}
	string[i] = '\0'; // String must be closed with \0
	printf("String length is %d\n", Length(string));
	return 0;
}
int Length(char str[])
{
	int cnt; //counter of number of characters found
	
	for (cnt = 0; *(str) != '\0'; str++) //for loop that loops till string terminating character is found. 
	{
		cnt++;
	}
	return cnt;
}