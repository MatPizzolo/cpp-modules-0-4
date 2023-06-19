#include "../inc/Zombie.hpp"
#include <new>

Zombie* zombieHorde(int n, std::string name){
	
	int i = 0;
	if (n <= 0)
	{
		std::cout << "no te pases de vivo" << std::endl;
		return NULL;
	}
	
	Zombie* horde = new Zombie[n];

	while (i < n) {
		horde[i].setName(name);
		i++;
	}
	return horde;
}
