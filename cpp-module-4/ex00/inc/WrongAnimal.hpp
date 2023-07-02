#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal & copy);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		void makeSound(void) const;
		std::string getType( void ) const;
		~WrongAnimal();
};

#endif