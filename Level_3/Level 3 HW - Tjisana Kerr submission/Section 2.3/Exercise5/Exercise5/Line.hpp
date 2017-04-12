//Exercise 5: Line Class
//Line class

#ifndef LINE_HPP
#define LINE_HPP

#include "Point.hpp"
#include <iostream>

class Line
{
public:
	Line();
	Line(const Point& p1, const Point& p2);
	Line(const Line& L1); //copy constructor
	~Line();

	Point start() const; //getter function gets start point
	Point end() const; //getter function gets end point
	void start(const Point& p1); //sets start point
	void end(const Point& p1); //sets end point
	std::string Line::ToString();
	double Length() const;
	

private:
	Point STRpt;
	Point ENDpt;
};

#endif