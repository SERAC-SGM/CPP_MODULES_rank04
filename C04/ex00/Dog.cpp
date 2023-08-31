#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &toCopy)
{
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;

}

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
	std::cout << "woof" << std::endl;
}

const std::string	&Dog::getType() const
{
	return this->_type;
}
