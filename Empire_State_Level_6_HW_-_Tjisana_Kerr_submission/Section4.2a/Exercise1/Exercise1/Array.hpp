#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Point.hpp"


namespace TKerr{
	namespace Containers
	{
		template <class T> class Array
		{
			
		public:
			Array();
			Array(int size);
			Array(const Array<T>& source);
			virtual ~Array();

			//operators
			Array& operator = (const Array<T>& source);
			T& operator [] (int index);
			const T& operator [] (int index) const;

			//function
			int Size() const;
			void SetElement(const T& p1, int index);
			T& GetElement(int index) const;
		private:
			T* m_data;
			int arraySize;
		};

	}//end of namespace Containers block
}//end of namespace TKerr block

#ifndef Array_cpp // Must be the same name as in source file #define
#include "Array.cpp"
#endif

#endif 
