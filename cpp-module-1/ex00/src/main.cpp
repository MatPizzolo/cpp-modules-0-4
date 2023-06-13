#include <iostream>

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie z = newZombie("Alex");
	z.announce;
	delete z;
	randomChump("mateo");
}
