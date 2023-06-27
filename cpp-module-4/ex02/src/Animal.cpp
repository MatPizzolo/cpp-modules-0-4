#include "../inc/Animal.hpp"

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = src.type;
	return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}