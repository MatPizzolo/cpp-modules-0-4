#ifndef SRCAVTRAP_H
#define SRCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	private:
		bool _isGuardingGate;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		void guardGate();
		bool getIsGuarding(void) const;
		void attack(const std::string& target);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
};

#endif