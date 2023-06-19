#ifndef SRCAVTRAP_H
#define SRCAVTRAP_H

#include "ClapTrap.hpp"

class ScravTrap: public ClapTrap {
	private:

	public:
		ScravTrap(std::string name);
		~ScravTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif