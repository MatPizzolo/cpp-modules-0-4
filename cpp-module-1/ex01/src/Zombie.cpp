#include "../inc/Zombie.hpp"

Zombie::Zombie()
	:name("")
{}

Zombie::Zombie(std::string name)
	:name(name)
{}

void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name){
	return new Zombie(name);
}
