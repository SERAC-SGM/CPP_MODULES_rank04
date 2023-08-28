#include "Fixed.hpp"
#include <cmath>
#include <math.h>

Fixed::Fixed() : _fixedPointValue(0)
{}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
}

Fixed::Fixed(const int number) : _fixedPointValue(number << this->_fractionalBits)
{}

Fixed::Fixed(const float number) : _fixedPointValue(roundf(number * pow(2, this->_fractionalBits)))
{}

Fixed::~Fixed()
{}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_fixedPointValue = rhs._fixedPointValue;
	return *this;
}

// comparison operators

bool	Fixed::operator>(const Fixed &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

// arithmetic operators

Fixed	Fixed::operator+(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() + rhs.toFloat());
	return result;
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() - rhs.toFloat());
	return result;
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() * rhs.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(this->toFloat() / rhs.toFloat());
	return result;
}

// increment operators

Fixed	&Fixed::operator++()
{
	this->_fixedPointValue++;
	return this;
}

Fixed	Fixed::operator++(int)
{

}

Fixed	Fixed::operator--()
{

}

Fixed	Fixed::&operator--(int)
{

}

std::ostream &operator << (std::ostream &flux, const Fixed &fixed)
{
	flux << fixed.toFloat();
	return flux;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(const int &raw)
{
	this->_fixedPointValue = raw;
}

int	Fixed::toInt() const
{
	return this->_fixedPointValue >> this->_fractionalBits;
}

float	Fixed::toFloat() const
{
	return this->_fixedPointValue / roundf(pow(2, this->_fractionalBits));
}
