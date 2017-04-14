#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

namespace TKerr
{//beginning of TKerr namespace block
	namespace CAD
	{//beginning of CAD namespace block

		class Shape
		{
		public:
			//constructors and destructor
			Shape();//default constructor
			Shape(const Shape& source);//copy constructor
			virtual ~Shape();

			//acessing functions
			int ID(); //return ID of object		
			virtual std::string ToString() const; 

			//functions
			virtual void Draw() = 0;

			//operators
			Shape& operator = (const Shape& source); // Assignment operator.
		private:
			//memeber data
			int m_id; //id number variable
		};

		
	}//end of CAD namespace block
}//end of namespace block
#endif 
