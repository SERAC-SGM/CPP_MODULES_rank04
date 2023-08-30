#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
}

Cat::Cat(const Cat &toCopy)
{
	*this = toCopy;
}

Cat::~Cat()
{}

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
	std::cout << "miaou";
}

const std::string	&Cat::getType() const
{
	return this->_type;
}
