#include <iostream>

#include "../inc/Fixed.hpp"

const int	Fixed::fract = 8;

Fixed::Fixed(): data(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->data = other.getRawBits();
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


Fixed::Fixed(const int param)
{
	std::cout << "Int constructor called" << std::endl;
	this->data = param << fract;
}

Fixed::Fixed(const float param)
{
	std::cout << "Float constructor called" << std::endl;
	this->data = (int)param; //<< fract;
}

float Fixed::toFloat(void) const
{
	return ((float)this->data);
}

int Fixed::toInt(void) const
{
	return ((int)this->data);
}

Fixed& Fixed::operator<<(const Fixed& other) {
	std::cout << "(<<) operator called" << std::endl;
	this->data = other.getRawBits();
	return *this;
}
