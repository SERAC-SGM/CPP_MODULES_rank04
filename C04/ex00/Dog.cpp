#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
}

Dog::Dog(const Dog &toCopy)
{
	*this = toCopy;
}

Dog::~Dog()
{}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "woof";
}

const std::string	&Dog::getType() const
{
	return this->_type;
}
