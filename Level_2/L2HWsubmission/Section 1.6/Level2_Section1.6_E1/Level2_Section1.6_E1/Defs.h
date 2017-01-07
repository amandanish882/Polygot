//Author Tjisana Kerr - Level 2 Section 1.6 Exercise 1
//Header file Defs.h used to define two macros
//Macros PRINT1 and PRINT2 are defined in this file
//PRINT1 prints one variable, PRINT2 prints two variables. 

#ifndef DEF_S
#define DEF_S //

#include <stdio.h>

	#ifndef PRINT1(a) 
		#define PRINT1(a) printf("Input is %d\n",a) //print variable a to the console
	#endif 

	#ifndef PRINT2(a,b)
		#define PRINT2(a,b) printf("Inputs are %d and %d\n",a,b) //print variables a and b to the console
	#endif

#endif