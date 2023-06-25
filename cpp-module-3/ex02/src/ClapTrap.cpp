#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Claptrap Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20) {
	std::cout << "Claptrap "<< name << " constructor called" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0) {
		std::cout << this->name << " can't attack, is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't attack, it has not suficcient energy points" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	// ??????????????
	// if (this->hitPoints -= amount <= 0) {
	// 	std::cout << this->name << " can`t take that amount of damage" << std::endl;
	// 	return ;
	// }
	if (this->hitPoints <= 0) {
		std::cout << this->name << " can't take damage, is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't take damage, has no energy points" << std::endl;
		return ;
	}
	std::cout << this->name << " took " << amount << " of damage" << std::endl;
	this->hitPoints -= amount;
	this->energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0) {
		std::cout << this->name << " can't be repaired, is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't be repaired, has no energy points" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints -= 1;
	std::cout << this->name << " repaired, " << amount << "  hitpoints" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
