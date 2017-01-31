#ifndef POINTARRAY_CPP
#define POINTARRAY_CPP

#include "PointArray.hpp"
namespace TKerr
{
	namespace Containers
	{
		template <class T>
		PointArray<T>::PointArray() : Array<T>::Array()
		{}//default constructor

		template <class T>
		PointArray<T>::PointArray(const PointArray<T>& source):Array<T>::Array(source)//copy constructor
		{}

		template <class T>
		PointArray<T>::PointArray(int size):Array<T>::Array(size)//constructor specify the number of elements
		{}

		template <class T>
		PointArray<T>::~PointArray()
		{}

		//operator overload
		template <class T>
		PointArray<T>& PointArray<T>::operator = (const PointArray<T>& source)
		{	// Avoid doing assign to myself
			if (this == &source)
				return *this;

			Array<T>::operator= (source);
			return *this;
		}

		template <class T>
		double PointArray<T>::Length() const
		{
			double temp = 0;
			for (int i = 0; i < Size()-1; i++)
			{
				temp += (*this)[i].Distance((*this)[i+1]);
			}
			return temp;
		}
	}//end of namespace Containers block
}//end of namespace TKerr block

#endif // !POINTARRAY_CPP
