#ifndef ARRAY_CPP
#define ARRAY_CPP

#include "Array.hpp"
#include "Point.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include <sstream>

namespace TKerr
{
	namespace Containers
	{
		template <class T>
		unsigned int Array<T>::defaultSize = 4;

		template <class T>
		Array<T>::Array() :arraySize(defaultSize)//default constructor
		{
			m_data=new T[arraySize];
		}

		template <class T>
		Array<T>::Array(int size) : arraySize(size)//constructor
		{
			m_data = new T[arraySize];
		}

		template <class T>
		Array<T>::Array(const Array<T>& source) : m_data(new T[source.arraySize]), arraySize(source.arraySize)// copy constructor
		{
			for (int i = 0; i < arraySize; i++)
			{
				m_data[i] = source.m_data[i];
			}
		}

		template <class T>
		Array<T>::~Array()//destructor
		{
			delete[] m_data;
		}
		
		//overloaded operator =
		template <class T>
		Array<T>& Array<T>::operator= (const Array<T>& source)
		{
			// Avoid doing assign to myself
			if (this == &source)
				return *this;

			delete[] m_data;
			m_data = new T[source.arraySize];
			arraySize = source.arraySize;

			for (int i = 0; i < arraySize; i++)
			{
				m_data[i] = source.m_data[i];
			}
			return *this;
		}
		
		//overloaded operator []
		template <class T>
		T& Array<T>::operator [] (int index)
		{

			if (index >= arraySize || index<0) throw OutOfBoundsException(index);
			return m_data[index];
		}

		//const overloaded operator []
		template <class T>
		const T& Array<T>::operator [] (int index) const
		{
			if (index >= arraySize || index<0) throw OutOfBoundsException(index);
			return m_data[index];
		}

		template <class T>
		int Array<T>::Size() const
		{
			return arraySize;
		}

		template <class T>
		void Array<T>::SetElement(const T& p1, int index)
		{
			if (index >= arraySize || index<0) throw OutOfBoundsException(index);

			if (index< arraySize && index >= 0)
			{
				m_data[index] = p1;
			}

		}

		template <class T>
		T& Array<T>::GetElement(int index) const
		{
			if (index >= arraySize || index<0) throw OutOfBoundsException(index); 
			if (index< arraySize && index >= 0)
			{
				return m_data[index];
			}			
		}

		template <class T>
		void Array<T>::DefaultSize(unsigned int source)
		{
			defaultSize = source;
		}

		template <class T>
		unsigned int Array<T>::DefaultSize()
		{
			return defaultSize;
		}
	}//end of namespace Containers
}//end of namespace TKerr

#endif