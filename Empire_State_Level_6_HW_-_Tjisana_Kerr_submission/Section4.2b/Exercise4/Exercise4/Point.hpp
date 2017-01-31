// Point.hpp
// Header file for Class Point

#ifndef Point_HPP
#define Point_HPP

#include <iostream>
#include "Shape.hpp"

namespace TKerr
{//beginning of TKerr namespace block
	namespace CAD
	{//beginning of CAD namespace block

		class Point: public Shape
		{
		public:
			//constructors and destructor
			Point();//default constructor	
			Point(const Point& source);	//copy constructor
			Point(double xval, double yval);//constructor to initialize with values
			virtual ~Point(); //destructor

			//constructor added for Exercise 3
			explicit Point(double value);

			//acessing functions
			double X() const; //get value of x cordinate
			double Y() const; //get value of y cordinate
			void X(double newX){ x = newX; } //set value of x coordinate
			void Y(double newY){ y = newY; } //set value of y coordinate
			std::string ToString() const; //a string description of the point

			//functions
			double Distance() const; // Calculate the distance to the origin (0, 0).
			double Distance(const Point& P) const; // Calculate the distance between two points.
			void Draw() const;

			//operators
			Point operator - () const; // Negate the coordinates.
			Point operator * (double factor) const; // Scale the coordinates.
			Point operator + (const Point& p) const; // Add coordinates.
			bool operator == (const Point& p) const; // Equally compare operator.
			Point& operator = (const Point& source); // Assignment operator.
			Point& operator *= (double factor); // Scale the coordinates & assign.	

			//global operator overloading
			friend std::ostream& operator << (std::ostream& os, const Point& p);

		private:
			//memeber data
			double x; // x coordinate
			double y; // y coordinate
		};

		inline double Point::X() const //return value of x coordinate
		{
			return x;
		}

		inline double Point::Y() const //return value of y coordinate
		{
			return y;
		}

	}//end of CAD namespace block
}//end of namespace block
#endif