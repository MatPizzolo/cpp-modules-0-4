#ifndef SRCAVTRAP_H
#define SRCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
		bool _isGuardingGate;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		void guardGate();
		bool getIsGuarding(void) const;
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
};

#endif
