#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat &toCopy)
{
	this->_brain = toCopy._brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

const std::string	&Cat::getType() const
{
	return this->_type;
}
