// Point.cpp
// Source file for Class Point
//Implementation of member functions in Point.hpp



#include "Point.hpp"
#include <sstream>
#include <cmath>

namespace TKerr
{
	namespace CAD
	{
		Point::~Point()
		{
			//std::cout << "Point destructor"<<std::endl;
		}

		Point::Point() : Shape(),x(0), y(0) //default constructor
		{
		}

		Point::Point(const Point& source) : Shape(source), x(source.x), y(source.y)//copy constructor
		{
		}

		Point::Point(double xval, double yval) : Shape(), x(xval), y(yval)
		{
		}

		//constructor added for Exercise 3
		Point::Point(double d1) : Shape(), x(d1), y(d1)
		{
		}

		std::string Point::ToString() const //print x and y coordinate on console
		{
			std::stringstream ss;
			std::string s = Shape::ToString();
			ss <<s<< " Point(" << x << "," << y << ")"; //concatenate string components and double components	
			return ss.str();
		}

		double Point::Distance() const //distance from the origin
		{
			return std::sqrt(x*x + y*y);
		}

		double Point::Distance(const Point& P) const //distance from another point
		{
			return std::sqrt(std::pow((P.x - x), 2) + std::pow((P.y - y), 2));
		}

		//Point operator - () const; // Negate the coordinates.
		Point Point::operator- () const
		{
			return Point(-x, -y);
		}

		//Point operator * (double factor) const; // Scale the coordinates.
		Point Point::operator* (double factor) const
		{
			return Point(factor * x, factor * y);
		}

		//Point operator + (const Point& p) const; // Add coordinates.
		Point Point::operator+ (const Point& p) const
		{
			return Point(x + p.x, y + p.y);
		}

		//bool operator == (const Point& p) const; // Equally compare operator.
		bool Point::operator== (const Point& p) const
		{
			return (x == p.x && y == p.y);
		}

		//Point& operator = (const Point& source); // Assignment operator.
		Point& Point::operator= (const Point& source)
		{
			// Avoid doing assign to myself
			if (this == &source)
				return *this;

			Shape::operator=(source);
			x = source.x;
			y = source.y;

			return *this;
		}
		//Point& operator *= (double factor); // Scale the coordinates & assign.
		Point& Point::operator *= (double factor)
		{
			x *= factor;
			y *= factor;
			return *this;
		}

		//std::ostream& operator << (std::ostream& os, const Point& p)
		std::ostream& operator << (std::ostream& os, const Point& p)
		{
			os << "Point(" << p.x << "," << p.y << ")"; //concatenate string components and double components	
			return os;
		}

		void Point::Draw()const
		{
			std::cout << "Point shape drawn" << std::endl;
		}

	}
}

