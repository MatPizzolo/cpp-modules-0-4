#include "../inc/Brain.hpp"
#include "../inc/Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";    
    this->brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.type;
    this->brain = new Brain;
    *(this->brain) = Brain(*(copy.brain));
	std::cout << "Dog Copy Constructor called" << std::endl;
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
    delete this->brain;
    std::cout << "Dog Destructor called" << std::endl;
}