#ifndef NUMERICARRAY_CPP
#define NUMERICARRAY_CPP

#include "NumericArray.hpp"
#include "OutOfBoundsException.hpp"

namespace TKerr
{
	namespace Containers
	{
		template<class T>
		NumericArray<T>::NumericArray() :Array<T>::Array()
		{//default constructor
		}
		template<class T>
		NumericArray<T>::NumericArray(int size) : Array(size)
		{}

		template<class T>
		NumericArray<T>::NumericArray(const NumericArray<T>& source) : Array<T>::Array(source)// copy constructor
		{//copy constructor
		}

		template<class T>
		NumericArray<T>::~NumericArray()
		{//destructor
		}
		
		template<class T>
		NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source)
		{
			// Avoid doing assign to myself
			if (this == &source)
				return *this;
			
			Array<T>::operator= (source);
			return *this;
		}

		template<class T>
		NumericArray<T> NumericArray<T>::operator* (double mult) const
		{			
			NumericArray<T> temp(Size());
			for (int i = 0; i < NumericArray<T>::Size(); i++)
			{
				temp[i] = GetElement(i) * mult;
			}
			return temp;
		}

		template<class T>
		NumericArray<T> NumericArray<T>::operator+ (const NumericArray<T>& na)const
		{
			if (Size() != na.Size()) throw OutOfBoundsException(na.Size());

			NumericArray<T> temp(Size());
			for (int i = 0; i < NumericArray<T>::Size(); i++)
			{
				temp[i] = GetElement(i) + na[i];
			}
			return temp;
		}

		template<class T>
		T NumericArray<T>::dotproduct(const NumericArray<T>& source) const
		{
			T temp=0;
			
			for (int i=0; i < source.Size(); i++)
			{
				temp += GetElement(i) * source[i];
			}
			return temp;
		}
	}//end of namespace Containers block
}//end of namespace TKerr block

#endif