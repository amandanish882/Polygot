/*Author Tjisana Kerr
a C-program that prints two columns on the screen with the temperature in degrees Fahrenheit and the equivalent temperature in degrees Celsius.
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	double TempF = 0, endTempF = 300; //define and initialize the start and end temperature variables in Fahrenheit
	double currTempF = 0;// variable for current temperature at any one iteration in Fahrenheit
	double step = 20; //define and initialize variable to record stepsize
	double Celcius;
	
	printf("Fahrenheit\t\tCelcius\n");
	while (TempF<=endTempF)
	{	
		Celcius = (TempF - 32) * 5.0 / 9.0;
		printf("%10.1f\t\t%10.1f\n", TempF, Celcius);
		TempF += step;
	}
	return 0;
}
