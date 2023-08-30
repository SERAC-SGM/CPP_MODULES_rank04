#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:

	Dog();
	Dog(const Dog &toCopy);
	~Dog();

	Dog	&operator=(const Dog &rhs);

	void	makeSound() const;
	const std::string	&getType() const;

protected:

};
#endif
