//Line class implementation

#include "Line.hpp"
#include <iostream>
#include <sstream>

Line::~Line()
{
}

Line::Line() : STRpt(0, 0), ENDpt(0, 0)
{
}

Line::Line(const Point& p1, const Point& p2) : STRpt(p1), ENDpt(p2)
{
}

Line::Line(const Line& L1) :STRpt(L1.STRpt), ENDpt(L1.ENDpt)
{
}

Point Line::start() const //getter function gets start point
{
	return STRpt;
}

Point Line::end() const //getter function gets end point
{
	return ENDpt;
}

void Line::start(const Point& p1)//sets start point
{
	STRpt= p1;	
}

void Line::end(const Point& p1)//sets end point
{
	ENDpt = p1;
}

std::string Line::ToString() const
{
	std::stringstream ss;
	ss << "Starting point " << STRpt.ToString() << " Ending point " << ENDpt.ToString() << std::endl;
	return ss.str();
}

double Line::Length() const
{
	return STRpt.Distance(ENDpt);
}

//Line& operator = (const Line& source);
Line& Line::operator = (const Line& source)
{
	if (this == &source)
		return *this;

	STRpt = source.STRpt;
	ENDpt = source.ENDpt;
	return *this;
}

//Line& operator *= (double factor);
Line& Line::operator *= (double factor)
{
	STRpt *= factor;
	ENDpt *= factor;
	return *this;
}

std::ostream& operator << (std::ostream& os, const Line& L1)
{
	os << "Starting point " << L1.STRpt.ToString() << " Ending point " << L1.ENDpt.ToString() << std::endl;;
	return os;
}

