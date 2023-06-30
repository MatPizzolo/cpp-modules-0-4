#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->_isGuardingGate = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->_isGuardingGate = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	std::cout << "ScavpTrap copy constructor called" << std::endl;
	this->_isGuardingGate = copy._isGuardingGate;
}

void ScavTrap::guardGate() {
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't guard, it has not suficcient energy points" << std::endl;
		return ;
	}
	if (this->_isGuardingGate == false) {
		this->energyPoints -= 1;
		this->_isGuardingGate = true;
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap already is in Gate keeper mode" << std::endl;
}

bool ScavTrap::getIsGuarding(void) const
{
	return (this->_isGuardingGate);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0) {
		std::cout << this->name << " can't attack, is dead" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0) {
		std::cout << this->name << " can't attack, it has not suficcient energy points" << std::endl;
		return ;
	}
	std::cout << this->name << " slays " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	this->energyPoints -= 1;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();
	this->_isGuardingGate = other.getIsGuarding();
	return (*this);
}	

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}