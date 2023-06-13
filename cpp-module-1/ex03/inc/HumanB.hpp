#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* myWeapon;

	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &Weapon);
};

#endif
