//Line class

#ifndef LINE_HPP
#define LINE_HPP

#include "Point.hpp"
#include <iostream>
#include "Shape.hpp"

namespace TKerr
{//beginning of namespace TKerr block
	namespace CAD
	{//beginning of namespace CAD block
		class Line:public Shape
		{
		public:
			Line();
			Line(const Point& p1, const Point& p2);
			Line(const Line& L1); //copy constructor
			virtual ~Line();

			Point start() const; //getter function gets start point
			Point end() const; //getter function gets end point
			void start(const Point& p1); //sets start point
			void end(const Point& p1); //sets end point
			std::string ToString() const;
			double Length() const;

			//operators
			Line& operator = (const Line& source);
			Line& operator *= (double factor);

			//functions
			void Draw() const;

			//global operator overloading
			friend std::ostream& operator << (std::ostream& os, const Line& L1);

		private:
			Point STRpt;
			Point ENDpt;
		};
	}//end of namespace CAD block
}//end of namespace TKerr block
#endif