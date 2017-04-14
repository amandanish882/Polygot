#ifndef STACKEXCEPTION_HPP
#define STACKEXCEPTION_HPP

#include <iostream>

namespace TKerr
{
	namespace Containers
	{
		class StackException
		{
			public:
			StackException();//default constructor
			virtual ~StackException();
			
			//functions
			virtual std::string GetMessage() const = 0;
			private:

	    };

		class StackFullException :public StackException
		{
		public:
			StackFullException();
			virtual ~StackFullException();
			
			//functions
			std::string GetMessage() const;
		private:

		};

		class StackEmptyException :public StackException
		{
		public:
			StackEmptyException();
			virtual ~StackEmptyException();
			
			//functions
			std::string GetMessage() const;

		private:

		};
	}//end of namespace Containers block
}//end of namespace TKerr block
#endif // STACKEXCEPTION_HPP
