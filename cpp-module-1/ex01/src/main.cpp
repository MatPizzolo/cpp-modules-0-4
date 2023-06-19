#include <iostream>

#include "../inc/Zombie.hpp"

int main()
{
	int size = 10;
	Zombie* horde = zombieHorde(size, "mario");
	while (size > 0) {
		horde[size - 1].announce();
		size--;
	}
	delete[] horde;
}
