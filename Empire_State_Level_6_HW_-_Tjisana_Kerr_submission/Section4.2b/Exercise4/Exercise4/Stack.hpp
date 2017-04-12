#ifndef STACK_HPP
#define STACK_HPP

#include "Array.hpp"

namespace TKerr{
	namespace Containers
	{
		template<class T> class Stack
		{
		public:
			//constructors and destructors
			Stack();//default constructor
			Stack(unsigned int size);
			Stack(const Stack<T>& source);//copy constructor
			virtual ~Stack();//destructor

			//operators
			Stack<T>& operator= (const Stack<T>& source);

			//functions
			void push(const T& source); //push item on to stack
			T pop();// remove item from stack
		private:
			Array<T> arr;
			unsigned int m_current;
		};

	}//end of namespace Containers block
}//end of namespace TKerr block


#ifndef STACK_CPP
#include "Stack.cpp"
#endif //


#endif // !STACK_HPP

