#ifndef FIXED_H
# define FIXED_H

class Fixed {
	private:
		int data;
		static const int fract;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int param);
		Fixed(const float param);
		Fixed& operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt (void) const;
		Fixed& operator<<(const Fixed& other);
		~Fixed();
};

#endif