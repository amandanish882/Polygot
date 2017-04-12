/*Author Tjisana Kerr
a C-program that prints two columns on the screen with the temperature in degrees Celsius in the left column and degrees Fahrenheit in the right column.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	double TempC = 0, endTempC = 19; //define and initialize the start and end temperature variables in Fahrenheit
	double currTempF = 0;// variable for current temperature at any one iteration in Fahrenheit
	double step = 1; //define and initialize variable to record stepsize
	double Fahrenheit=0;
	
	printf("Celcius\t\tFahrenheit\n");
	//while (TempF<=endTempF)
	for (TempC = 0; TempC <=endTempC; TempC += step)
	{
		Fahrenheit = TempC * 9.0 / 5.0 + 32;
		printf("%10.1f\t%10.1f\n", TempC,Fahrenheit );
	}
	return 0;
}
