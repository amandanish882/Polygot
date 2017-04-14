/*Author Tjisana Kerr
a C-program that asks for text input from the keyboard. The output of this program should be the amount of characters, the amount of words and the amount of newlines that have been typed
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int CharCount=0;// count the number of alphanumberic characters
	int WordCount=1;//count the number of words
	int NewLCount=0;//count the number of new lines
	int cnt=0;//counter for the total number of characters entered
	char c='a';//get char from console
	char prev_char='a';//hold character previous to the current character being read in at the console	

	printf("Enter text (signal end of input by pressing ctrl + D):\n");	
	
	while ((c = getchar()) != 4)
	{		
		cnt++;

		//test for new word.
		if (isspace(prev_char) && isalnum(c))
		{
			WordCount++;
		}
		//test for new alphanumeric character
		if (isalnum(c))
		{
			CharCount++;
		}
		//test for new line
		if (c=='\n')
		{
			NewLCount++;
		}
		prev_char = c;

		//if first character is a space then WordCount will overstate value, so it must be set to 0
		if (cnt == 1 && isspace(c))
		{
			WordCount = 0;
		}
	}
	//if first character is ^D then WordCount will overstate value, so it must be set to 0
	if (CharCount==0)
	{
		WordCount = 0;
	}
	
	
	printf("Word Count %d\n", WordCount);
	printf("Char Count %d\n", CharCount);
	printf("NewL Count %d\n", NewLCount);
	return 0;
}
