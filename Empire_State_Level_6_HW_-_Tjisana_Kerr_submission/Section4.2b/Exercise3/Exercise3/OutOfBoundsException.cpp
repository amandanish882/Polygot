#include "Array.hpp"
#include "Point.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include <sstream>

namespace TKerr
{
	namespace Containers
	{		
		OutOfBoundsException::OutOfBoundsException() : ArrayException()
		{}
		OutOfBoundsException::~OutOfBoundsException()
		{}
		OutOfBoundsException::OutOfBoundsException(int index) : ArrayException(),m_index(index)
		{}

		/*OutOfBoundsException::OutOfBoundsException(int index1, int index2)
		{
			std::cout << "Arrays are not the same size" << std::endl;
		}*/

		std::string OutOfBoundsException::GetMessage() const
		{
			std::stringstream ss;
			ss << "Index "<<m_index << " is out of bounds";
			return ss.str();
		}

	}//end of namespace Containers
}//end of namespace TKerr
