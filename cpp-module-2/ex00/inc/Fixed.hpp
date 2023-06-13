#ifndef FIXED_H
# define FIXED_H

class Fixed {
	private:
		int data;
		static const int fract;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		~Fixed();
};

#endif