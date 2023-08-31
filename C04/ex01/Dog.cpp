#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog &toCopy)
{
	this->_brain = toCopy._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
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
