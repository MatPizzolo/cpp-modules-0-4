#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int data;
		static const int fract;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int param);
		Fixed(const float param);
		Fixed &operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt (void) const;
		bool &operator>(const Fixed& other) const;
		bool &operator<(const Fixed& other) const;
		bool &operator>=(const Fixed& other) const;
		bool &operator<=(const Fixed& other) const;
		bool &operator==(const Fixed& other) const;
		bool &operator!=(const Fixed& other) const;
		float &operator+(const Fixed& other);
		float &operator-(const Fixed& other);
		float &operator*(const Fixed& other);
		float &operator/(const Fixed& other);
		
		~Fixed();
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif