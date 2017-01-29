#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Point.hpp"


namespace TKerr{
	namespace Containers
	{	
		

		class Array
		{
			
		public:
			Array();
			Array(int size);
			Array(const Array& source);
			virtual ~Array();

			//operators
			Array& operator = (const Array& source);
			CAD::Point& operator [] (int index);
			const CAD::Point& operator [] (int index) const;

			//function
			int Size() const;
			void SetElement(const CAD::Point& p1, int index);
			CAD::Point& GetElement(int index) const;
		private:
			CAD::Point* m_data;
			int arraySize;
		};

		class ArrayException
		{
		public:
			
			//constructor and destructor
			ArrayException();
			virtual ~ArrayException();

			//function
			virtual std::string GetMessage() const = 0;

		private:			

		};
		
		class OutOfBoundsException : public ArrayException
		{
		public:
			//constructors and destructor
			OutOfBoundsException();
			OutOfBoundsException(int index);
			virtual  ~OutOfBoundsException();

			//functions
			std::string GetMessage() const;

		private:
			int m_index;
		};

		
	}//end of namespace Containers block
}//end of namespace TKerr block
#endif 
