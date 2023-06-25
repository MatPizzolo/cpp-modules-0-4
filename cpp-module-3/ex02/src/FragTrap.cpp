#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Constructor for the name " << this->name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	this->hitPoints -= 1;
	std::cout << "FragTrap " << this->name << ": You want a high five?\n\t*CLAP*" << std::endl;
}