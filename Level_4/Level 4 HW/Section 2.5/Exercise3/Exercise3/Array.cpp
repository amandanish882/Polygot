//Array class implementation
#include "Array.hpp"
#include "Point.hpp"

Array::Array() :arraySize(10)//default constructor
{
	m_data = new Point[arraySize];
}

Array::Array(int size) : arraySize(size) //constructor
{
	m_data = new Point[arraySize];
}

Array::Array(const Array& source) : m_data(new Point[source.arraySize]),arraySize(source.arraySize) // copy constructor
{
	for (int i = 0; i < arraySize; i++)
	{
		m_data[i] = source.m_data[i]; 
	}
}
Array::~Array() //destructor
{
	delete[] m_data;
}

//overloaded operator =
Array& Array::operator= (const Array& source)
{
	// Avoid doing assign to myself
	if (this == &source)
		return *this;
	
	delete[] m_data;
	m_data = new Point[source.arraySize];
	arraySize = source.arraySize;

	for (int i = 0; i < arraySize; i++)
	{
		m_data[i] = source.m_data[i];
	}
	return *this;
}

//overloaded operator []
Point& Array::operator [] (int index)
{
	if (index>arraySize)
	{
		return m_data[0];
	}
	return m_data[index];
}

//overloaded operator [] const
const Point& Array::operator [] (int index) const
{
	if (index>arraySize)
	{
		return m_data[0];
	}
	return m_data[index];
}

int Array::Size() const
{
	return arraySize;
}

void Array::SetElement(const Point& p1, int index)
{
	if (index< arraySize && index>=0)
	{
		m_data[index] = p1;
	}
}

Point& Array::GetElement(int index) const
{
	if (index< arraySize && index >= 0)
	{
		return m_data[index];
	}
	return m_data[0];
}