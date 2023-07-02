#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy)
{
	std::cout << "WrongCat copy Constructor called" << std::endl;
    this->type = copy.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->type = src.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Meuw" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
