#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
#include "Shape.hpp"

namespace TKerr
{
	namespace CAD
	{
		class Circle: public Shape
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

			//functions
			void Draw()const;
			
			//global operator overloading
			friend std::ostream& operator << (std::ostream& os, const Circle& C1);

		};
	}//end of namespace CAD block
}//end of namespace TKerr block
#endif // 