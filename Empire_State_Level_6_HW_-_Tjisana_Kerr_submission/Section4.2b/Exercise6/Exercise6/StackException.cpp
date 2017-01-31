#ifndef STACKEXCEPTION_CPP

#include "StackException.hpp"
#include "Stack.hpp"

namespace TKerr
{
	namespace Containers
	{
		StackException::StackException()
		{}//default constructor
		StackException::~StackException()
		{}		
		
		//end of StackException implementation

		StackFullException::StackFullException() :StackException()
		{}
		StackFullException::~StackFullException()
		{}
		std::string StackFullException::GetMessage() const		
		{
			std::stringstream ss;
			ss << "StackFullException";
			return ss.str();
		}
		//end of StackFullException implementation

		StackEmptyException::StackEmptyException() : StackException()
		{}
		StackEmptyException::~StackEmptyException()
		{}
		std::string StackEmptyException::GetMessage() const
		{
			std::stringstream ss;
			ss << "StackEmptyException";
			return ss.str();
		}
		//end of StackEmptyException implementation

	}//end of namespace Containers block
}//end of namespace TKerr block

#endif // !STACKEXCEPTION_CPP