#include "../inc/ScravTrap.hpp"

ScravTrap::ScravTrap(std::string name){
	ClapTrap::ClapTrap(name);
}

ScravTrap::~ScravTrap(){
	std::cout << "ScrapTrap destructor called" << std::endl;
}