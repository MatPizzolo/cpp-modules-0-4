#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal constructor called\n";
	this->type = "wrong animal";
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
	std::cout << "def wrong\n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor called\n";
}