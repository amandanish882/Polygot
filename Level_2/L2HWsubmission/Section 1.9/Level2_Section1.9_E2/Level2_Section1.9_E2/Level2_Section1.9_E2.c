//Author Tjisana Kerr - Level 2 Section 1.9 Exercise 2
//Source code - modifiction of Level 2 Section 1.9 Exercise 1
//C-program that reads the characters from the keyboard and prints to file. 

#include <stdio.h>
#define FileNameLength 40


int main(void)
{
	//get file name
	printf("Enter file name (e.g. WordDoc.txt)\n");
	char fname[FileNameLength];
	scanf_s("%s", fname, FileNameLength); // store file name in fname

	FILE* Userfile; 
	Userfile = fopen(fname, "w"); //open file using filename from char array fname. Open file for write
	int c;
	printf("Enter text\n");
	while ((c = getchar()) != 1) //Test for ^A. ^A will signal end of output to file
	{
		fputc(c, Userfile);	//print each character to file Userfile	
	}
	printf("CTRL + A is a correct ending.\n");
	fclose(Userfile); //close and save file Userfile
	return 0;
}