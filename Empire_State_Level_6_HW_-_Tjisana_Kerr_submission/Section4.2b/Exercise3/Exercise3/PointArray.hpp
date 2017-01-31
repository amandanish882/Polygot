#ifndef POINTARRAY_HPP
#define POINTARRAY_HPP

#include "Array.hpp"
#include "Point.hpp"

using TKerr::CAD::Point;

namespace TKerr
{
	namespace Containers
	{
		template<class T=Point> class PointArray : public Array<T>
		{
		public:
			//constructors and destructor
			PointArray();//default constructor
			PointArray(const PointArray<T>& source);//copy constructor
			PointArray(int size);//constructor specify the number of elements
			virtual ~PointArray();

			//operator overload
			PointArray<T>& operator = (const PointArray<T>& source);

			//function
			double Length() const;

		private:

		};
		
	}//end of namespace Containers block
}//end of namespace TKerr block

#ifndef POINTARRAY_CPP
#include "PointArray.cpp"
#endif

#endif // !POINTARRAY_HPP
