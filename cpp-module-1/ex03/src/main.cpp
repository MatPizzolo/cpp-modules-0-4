#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include <iostream>

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	Weapon axe = Weapon("crude spiked axe");
	HumanB jim("Jim");
	jim.setWeapon(axe);
	jim.attack();
	axe.setType("some other type of club");
	jim.attack();
}
