#ifndef OUTOFBOUNDSEXCEPTION_HPP
#define OUTOFBOUNDSEXCEPTION_HPP

#include "Point.hpp"
#include "ArrayException.hpp"


namespace TKerr{
	namespace Containers
	{
		class OutOfBoundsException : public ArrayException
		{
		public:
			//constructors and destructor
			OutOfBoundsException();
			OutOfBoundsException(int index);
			virtual  ~OutOfBoundsException();

			//functions
			std::string GetMessage() const;

		private:
			int m_index;
		};		
	}//end of namespace Containers block
}//end of namespace TKerr block
#endif 
