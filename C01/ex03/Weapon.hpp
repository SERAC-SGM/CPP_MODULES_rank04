#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType(void) const;
	void				setType(std::string newType);

private:
	std::string _type;
};

#endif
