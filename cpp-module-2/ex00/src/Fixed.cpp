#include <iostream>

#include "../inc/Fixed.hpp"

Fixed::Fixed(): data(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->data;
}

void Fixed::setRawBits(const int raw){
	this->data = raw;
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor called" << std::endl;
}
