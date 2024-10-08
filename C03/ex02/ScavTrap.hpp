#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &toCopy);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &rhs);

	void	guardGate();
	void	attack(const std::string &target);
};
#endif
