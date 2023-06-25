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
	this->data = param << this->fract;
}

Fixed::Fixed(const float param)
{
	std::cout << "Float constructor called" << std::endl;
	this->data = (roundf(param * ft_pow(2, this->fract)));
}

float Fixed::toFloat(void) const
{
	return (this->data * ft_pow(2, -this->fract));
}

int Fixed::toInt(void) const
{
	return (this->data >> this->fract);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
	bool res = this->toFloat() > other.toFloat();
	return (res);
}

bool Fixed::operator<(const Fixed &other) const
{
	bool res = this->toFloat() < other.toFloat();
	return (res);
}

bool Fixed::operator>=(const Fixed &other) const
{
	bool res = this->toFloat() >= other.toFloat();
	return (res);
}

bool Fixed::operator<=(const Fixed &other) const
{
	bool res = this->toFloat() <= other.toFloat();
	return (res);
}

bool Fixed::operator==(const Fixed &other) const
{
	bool res = this->toFloat() == other.toFloat();
	return (res);
}

bool Fixed::operator!=(const Fixed &other) const
{
	bool res = this->toFloat() != other.toFloat();
	return (res);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed res(this->toFloat() + other.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed res(this->toFloat() - other.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res(this->toFloat() * other.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed res(this->toFloat() / other.toFloat());
	return (res);
}

Fixed &Fixed::operator++(void)
{
	this->data += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->data -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->data += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->data -= 1;
	return (temp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}