#ifndef ARRAYEXCEPTION_HPP
#define ARRAYEXCEPTION_HPP

#include "Array.hpp"


namespace TKerr
{
	namespace Containers
	{	
		class ArrayException
		{
		public:
			
			//constructor and destructor
			ArrayException();
			virtual ~ArrayException();

			//function
			virtual std::string GetMessage() const = 0;

		private:			

		};		
	}//end of namespace Containers block
}//end of namespace TKerr block
#endif 
