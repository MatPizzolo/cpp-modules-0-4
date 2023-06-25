#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScrapTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScrapTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScrapTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(){
	this->hitPoints -= 1;
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}