#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}
