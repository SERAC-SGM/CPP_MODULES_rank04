#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->_type = "";
}

Animal::Animal(const Animal &toCopy)
{
	*this = toCopy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

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
