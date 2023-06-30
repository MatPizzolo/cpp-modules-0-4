#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string name;

    public:
        DiamondTrap();
        DiamondTrap(std::string name );
        using   ScavTrap::attack;
        void    whoAmI( void );
		DiamondTrap(const DiamondTrap& copy);
		void attack(const std::string& target);
    	DiamondTrap &operator=(const DiamondTrap& other);
        ~DiamondTrap();
};

#endif