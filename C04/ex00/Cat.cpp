#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &toCopy)
{
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
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
