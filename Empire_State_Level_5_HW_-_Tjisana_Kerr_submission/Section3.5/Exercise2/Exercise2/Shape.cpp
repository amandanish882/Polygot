#include "Shape.hpp"
#include <sstream>
#include <stdlib.h>

namespace TKerr
{//beginning of TKerr namespace block
	namespace CAD
	{//beginning of CAD namespace block
		Shape::Shape() : m_id(rand()) //default constructor
		{}

		Shape::~Shape()
		{}

		Shape::Shape(const Shape& source) : m_id(source.m_id) //copy constructor
		{}

		Shape& Shape::operator = (const Shape& source) // Assignment operator.
		{
			if (this == &source)
				return *this;

			m_id = source.m_id;
		}

		//functions
		int Shape::ID()
		{
			return m_id;
		}

		std::string Shape::ToString() const
		{
			std::stringstream ss;
			ss << "ID: " << m_id;
			return ss.str();
		}

		
	}//end of CAD namespace block
}//end of namespace block