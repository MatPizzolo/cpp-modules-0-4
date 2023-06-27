#include "../inc/Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";    
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &copy): Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}