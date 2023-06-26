#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    this->type = copy.type;
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
}
