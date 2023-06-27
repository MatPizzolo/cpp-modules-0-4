#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat::Cat(Cat &copy): Animal(copy)
{
	std::cout << "Cat copy Constructor called" << std::endl;
    this->type = copy.type;
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
