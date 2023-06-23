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
		~Fixed();
		Fixed &operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt (void) const;
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int n);
		Fixed operator--(int n);
		static Fixed & min(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a, const Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & max(const Fixed &a, const Fixed &b);
		
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif