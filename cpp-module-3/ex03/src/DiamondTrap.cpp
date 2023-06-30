#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Diamond_clap_name") {
    std::string name = "Diamond";
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    
    std::cout << "DiamondTrap default constructed called" << std::endl;
}


DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name") {
    this->name = name;
    
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    static_cast<FragTrap&>(*this) = static_cast<const FragTrap&>(other);
    static_cast<ScavTrap&>(*this) = static_cast<const ScavTrap&>(other);
    name = other.name;
    return *this;
}
