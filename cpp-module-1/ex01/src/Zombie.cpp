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

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}