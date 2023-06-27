#include "../inc/Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
    this->type = "default";
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
    type = copy.type;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = src.type;
	return *this;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void    Animal::makeSound(void) const
{
    std::cout << "def" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
