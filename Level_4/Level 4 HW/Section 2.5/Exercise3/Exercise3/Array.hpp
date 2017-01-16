//Array Class
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Point.hpp"

class Array
{
public:
	Array();//default constructor
	Array(int size);//constructor
	Array(const Array& source);//copy constructor
	virtual ~Array();

	//overloaded operators
	Array& operator = (const Array& source);
	Point& operator [] (int index);
	const Point& operator [] (int index) const;

	//functions
	int Size() const; //size of the array
	void SetElement(const Point& p1, int index);//set array element
	Point& GetElement(int index) const;//read array element
private:
	Point* m_data;
	int arraySize;
};

#endif 
