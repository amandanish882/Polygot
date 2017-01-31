#ifndef NUMERICARRAY_HPP
#define NUMERICARRAY_HPP

#include "Array.hpp"

namespace TKerr{
	namespace Containers
	{
		template<class T> class NumericArray : public Array<T>
		{
		public:
			//constructors and destructor
			NumericArray();//default constructor
			NumericArray(int size);
			virtual ~NumericArray(); //destructor
			NumericArray(const NumericArray<T>& source);// copy constructor

			//operators			
			NumericArray<T>& operator = (const NumericArray<T>& source);
			NumericArray<T> operator * (double mult)const;
			NumericArray<T> operator + (const NumericArray<T>& na)const;

			//functions
			T dotproduct(const NumericArray<T>& source) const;
		};
	}//end of namespace Containers block
}//end of namespace TKerr block

#ifndef NUMERICARRAY_CPP
#include "NumericArray.cpp"
#endif

#endif