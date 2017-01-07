//Author Tjisana Kerr - Level 2 Section 1.6 Exercise 2
//Header file Defs.h used to define two macros
//Macros MAX2(x,y) and MAX3(x,y,z) are defined in this file
//MAX3 uses MAX2. 
#ifndef DEFS_H
#define DEFS_H

#ifndef MAX2(x,y)
#define MAX2(x,y) (x>y)? x:y //find the maximum value of two variables
#endif // MAX2(x,y)

#ifndef MAX3(x,y,z)
#define MAX3(x,y,z) (MAX2(x,y)>z)? MAX2(x,y):z //find the maximum value of three variables
#endif // MAX3(x,y,z)

#endif