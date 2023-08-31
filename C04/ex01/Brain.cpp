#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toCopy._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (rhs._ideas[i].empty() == false)
			this->_ideas[i].assign()
	}
}

const std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
		return ("idea index out of range");
	return this->_ideas[index];
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "idea index out of range" << std::endl;
		return;
	}
	this->_ideas[index] = idea;
}
