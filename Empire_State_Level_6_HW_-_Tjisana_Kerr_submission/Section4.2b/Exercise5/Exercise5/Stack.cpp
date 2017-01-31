#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.hpp"
#include "StackException.hpp"

namespace TKerr{
	namespace Containers
	{
		template<class T>
		Stack<T>::Stack() :m_current(0), arr(size)
		{} //default constructor

		template<class T>
		Stack<T>::~Stack(){} //destructor

		template<class T>
		Stack<T>::Stack(unsigned int size) : m_current(0), arr(size)
		{			
		}

		template<class T>
		Stack<T>::Stack(const Stack<T>& source) : m_current(source.m_current), arr(new Array<T>[source.arr.Size()])
		{
			for (int i = 0; i < source.arr.Size(); i++)
			{
				arr[i] = source.arr[i];
			}
		}

		template<class T>
		void Stack<T>::push(const T& source)
		{
			try{
			arr[m_current] = source;
			m_current++;//won't be incremented if exception is thrown
			}
			catch (ArrayException& err)
			{
				throw StackFullException();
				//std::cout << err.GetMessage() << std::endl;
			}
			catch (...)
			{
				std::cout << "Unhandled exception" << std::endl;
			}
		}

		template<class T>
		T Stack<T>::pop()
		{
			try{
			T temp = arr[m_current-1];
			m_current--;//won't be decremented if exception is thrown
			return temp;
			}
			catch (ArrayException& err)
			{
				throw StackEmptyException();
					m_current = 0;
				//std::cout << err.GetMessage() << std::endl;
			}
			catch (...)
			{
				std::cout << "Unhandled exception" << std::endl;
			}
		}
	}//end of namespace Containers block
}//end of namespace TKerr block


#endif // !STACK_CPP
