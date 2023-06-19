#include <iostream>

#include "../inc/Fixed.hpp"

const int	Fixed::fract = 8;

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

Fixed::Fixed(): data(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other) {
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
	this->data = (param * ft_pow(2, this->fract));
}

Fixed::Fixed(const float param)
{
	std::cout << "Float constructor called" << std::endl;
	this->data = (param * ft_pow(2, this->fract));
}

float Fixed::toFloat(void) const
{
	return (this->data * ft_pow(2, -this->fract));
}

int Fixed::toInt(void) const
{
	return (this->data * ft_pow(2, -this->fract));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

bool &Fixed::operator>(const Fixed& other) const
{
	bool res = this->toFloat() > other.toFloat();
	return (res);
}

bool &Fixed::operator<(const Fixed& other) const
{
	bool res = this->toFloat() < other.toFloat();
	return (res);
}

bool &Fixed::operator>=(const Fixed& other) const
{
	bool res = this->toFloat() >= other.toFloat();
	return (res);
}

bool &Fixed::operator<=(const Fixed& other) const
{
	bool res = this->toFloat() <= other.toFloat();
	return (res);
}

bool &Fixed::operator==(const Fixed& other) const
{
	bool res = this->toFloat() == other.toFloat();
	return (res);
}

bool &Fixed::operator!=(const Fixed& other) const
{
	bool res = this->toFloat() != other.toFloat();
	return (res);
}

float &Fixed::operator+(const Fixed& other)
{
	float res = this->toFloat() + other.toFloat();
	return (res);
}

float &Fixed::operator-(const Fixed& other)
{
	float res = this->toFloat() - other.toFloat();
	return (res);
}

float &Fixed::operator*(const Fixed& other)
{
	float res = this->toFloat() * other.toFloat();
	return (res);
}

float &Fixed::operator/(const Fixed& other)
{
	float res = this->toFloat() / other.toFloat();
	return (res);
}
