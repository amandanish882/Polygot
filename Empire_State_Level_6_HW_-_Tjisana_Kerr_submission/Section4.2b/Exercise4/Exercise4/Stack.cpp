#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.hpp"

namespace TKerr{
	namespace Containers
	{
		template<class T>
		Stack<T>::Stack():m_current(0)
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
			arr[m_current] = source;
			m_current++;//won't be incremented if exception is thrown
		}

		template<class T>
		T Stack<T>::pop()
		{
			T temp = arr[m_current-1];
			m_current--;
			return temp;
		}
	}//end of namespace Containers block
}//end of namespace TKerr block


#endif // !STACK_CPP
