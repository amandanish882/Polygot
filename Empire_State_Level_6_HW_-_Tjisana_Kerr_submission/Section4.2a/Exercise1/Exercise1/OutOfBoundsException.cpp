#include "Array.hpp"
#include "Point.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include <sstream>

namespace TKerr
{
	namespace Containers
	{		
		OutOfBoundsException::OutOfBoundsException()
		{}
		OutOfBoundsException::~OutOfBoundsException()
		{}
		OutOfBoundsException::OutOfBoundsException(int index) :m_index(index)
		{}

		std::string OutOfBoundsException::GetMessage() const
		{
			std::stringstream ss;
			ss << "Index "<<m_index << " is out of bounds";
			return ss.str();
		}

	}//end of namespace Containers
}//end of namespace TKerr
