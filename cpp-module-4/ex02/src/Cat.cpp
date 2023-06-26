#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat(): Animal()
{
    this->type = "cat";
    this->brain = new Brain;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->type = copy.type;
    this->brain = new Brain;
    *(this->brain) = Brain(*(copy.brain));
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meuw" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->brain;
}
