#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(), type("w animal")
{
	std::cout << "Wrong Animal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal desstructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "Wrong Animal copy constructor called\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "... generic wrong animal sound ...\n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}