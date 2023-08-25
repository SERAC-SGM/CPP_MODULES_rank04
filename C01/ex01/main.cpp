#include <iostream>
#include "Zombie.h"

#define NUMBER 100

int main()
{
	Zombie *horde = zombieHorde(NUMBER, "test");
	for (int i = 0; i < NUMBER; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}
