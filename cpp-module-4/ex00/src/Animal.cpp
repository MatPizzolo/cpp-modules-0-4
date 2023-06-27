#include "../inc/Animal.hpp"

Animal::Animal()
{
    this->type = "default";
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    this->type = copy.type;
	std::cout << "Animal Copy Constructor called" << std::endl;
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
