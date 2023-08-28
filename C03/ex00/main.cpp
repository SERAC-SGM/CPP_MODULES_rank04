#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("1");
	a.attack("target");
	for (int i = 0; i < 13; i++)
	{
		a.beRepaired(1);
	}
	return (0);
}
