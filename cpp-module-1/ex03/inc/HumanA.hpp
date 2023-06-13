#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &myWeapon;

	public:
		HumanA(std::string name, Weapon &myWeapon);
		void attack();
};

#endif