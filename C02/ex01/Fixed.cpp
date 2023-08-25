#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed::Fixed(const int number)
{
	this->_value = _value << this->_fractional_bits;
}

Fixed::Fixed(const float number)
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_value = other.getRawBits();
	return *this;
}

std::ostream &operator << (std::ostream &flux, const Fixed &fixed)
{
	std::cout << "default print" << std::endl;
	return flux;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(const int &raw)
{
	this->_value = raw;
}

int	toInt()
{
}

float	toFloat()
{
}
