//Author Tjisana Kerr - Level 2 Section 1.7 Exercise 4
//Source code
//C-program that has a function DayName()which can print the day of a given day-number

#include <stdio.h>

void DayName(int); //function declaration

int main(void)
{
	int i;
	for (i = 1; i <= 7; i++)
	{
		DayName(i);
	}
	return 0;
}

void DayName(int Day)
{/*Array WeekDays subscripts
 7	:7 days of the week. 
 10 :the longest day is 9 letters, then add one for the '\0'
 */
	char WeekDays[7][10] = { { "Sunday" }, { "Monday" }, { "Tuesday" },{"Wednesday"}, { "Thursday" }, { "Friday" }, { "Saturday" } }; //hard-coded strings of weekday names

	printf("Day is %s\n", WeekDays[Day - 1]); // use function argument to calculate index value for array WeekDays
}