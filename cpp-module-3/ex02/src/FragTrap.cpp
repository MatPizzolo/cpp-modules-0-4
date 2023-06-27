#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << this->name << " Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->name = copy.getName();
	this->hitPoints = copy.getHitPoints();
	this->energyPoints = copy.getEnergyPoints();
	this->attackDamage = copy.getAttackDamage();
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't high five, it has not suficcient energy points" << std::endl;
		return ;
	}
	this->energyPoints -= 1;
	std::cout << "FragTrap " << this->name << ": You want a high five?\n\t*CLAP*" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}