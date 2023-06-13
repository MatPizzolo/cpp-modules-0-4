#include "../inc/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &myWeapon)
	:name(name), myWeapon(myWeapon)
{}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->myWeapon.getType() << std::endl;
}
