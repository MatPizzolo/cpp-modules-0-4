#include <iostream>

#include "../inc/Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(-1, "mateo");
	delete[] horde;
}
