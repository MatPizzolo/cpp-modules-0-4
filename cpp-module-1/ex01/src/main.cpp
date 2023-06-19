#include <iostream>

#include "../inc/Zombie.hpp"

int main()
{
	int size = 3;
	Zombie* horde = zombieHorde(size, "mateo");
	while (size > 0) {
		horde[size - 1].announce();
		size--;
	}
	// for (int j = 0; j < 3; j++)
	// 	delete &horde[j];
	delete[] horde;

	system("leaks -q brainz");
}
