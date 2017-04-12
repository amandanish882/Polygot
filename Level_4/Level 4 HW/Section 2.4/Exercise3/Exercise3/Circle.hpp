#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Point.hpp"
#include "Line.hpp"
#include <iostream>

class Circle
{
private:
	double m_radius;
	Point center;
public:
	Circle();//default constructor
	Circle::Circle(double r, const Point& pt);
	Circle(const Circle& C1);//copy constructor
	virtual ~Circle();//destructor

	Point CenterPoint() const;//gets center point
	void CenterPoint(const Point& pt); //sets center point

	double Radius() const; //gets radius
	void Radius(const double r); //set radius. reference not used since "double" is built in type

	double Diameter() const;
	double Area() const;
	double Circumference() const;
	std::string ToString() const;

	//operators
	Circle& operator = (const Circle& source);
	Circle& operator *=(double factor);

};

//global operator overloading
std::ostream& operator << (std::ostream& os, const Circle& C1);



#endif // 


