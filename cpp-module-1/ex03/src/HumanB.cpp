#include "../inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
	:name(name)
{}

void HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon){
	this->myWeapon = &Weapon;
}