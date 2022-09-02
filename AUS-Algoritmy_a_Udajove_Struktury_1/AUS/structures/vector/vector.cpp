#include "vector.h"
#include "../ds_routines.h"
#include <cstdlib>
#include <cstring>

namespace structures {

	Vector::Vector(size_t size) :
		memory_(calloc(size, 1)),
		size_(size)
	{
	}

	Vector::Vector(const Vector& other) :
		Vector(other.size_)
	{
		//TODO 01: Vector
		throw std::exception("Vector::Vector: Not implemented yet.");
	}

	Vector::~Vector()
	{
		//TODO 01: Vector
	}

	Structure* Vector::clone() const
	{
		return new Vector(*this);
	}

	size_t Vector::size() const
	{
		return size_;
	}

	Structure & Vector::operator=(const Structure & other)
	{
		if (this != &other)
		{
			*this = dynamic_cast<const Vector&>(other);
		}
		return *this;
	}

	Vector& Vector::operator=(const Vector& other)
	{
		//TODO 01: Vector
		throw std::exception("Vector::operator=: Not implemented yet.");
	}

	bool Vector::operator==(const Vector& other) const
	{
		//TODO 01: Vector
		throw std::exception("Vector::operator==: Not implemented yet.");
	}

	byte& Vector::operator[](const int index)
	{
		//TODO 01: Vector
		throw std::exception("Vector::operator[]: Not implemented yet.");
	}

	byte Vector::operator[](const int index) const
	{
		//TODO 01: Vector
		throw std::exception("Vector::operator[]: Not implemented yet.");
	}

	byte& Vector::readBytes(const int index, const int count, byte& dest)
	{
		//TODO 01: Vector
		throw std::exception("Vector::readBytes: Not implemented yet.");
	}

	void Vector::copy(const Vector& src, const int srcStartIndex, Vector& dest, const int destStartIndex, const int length)
	{
		//TODO 01: Vector
		throw std::exception("Vector::copy: Not implemented yet.");
	}

	byte* Vector::getBytePointer(const int index) const
	{
		//TODO 01: Vector
		throw std::exception("Vector::getBytePointer: Not implemented yet.");
	}

}