#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "";
}

Animal::Animal(const Animal &toCopy)
{
	*this = toCopy;
}

Animal::~Animal()
{}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

void	Animal::makeSound(void) const
{}

const std::string 	&Animal::getType() const
{
	return this->_type;
}
