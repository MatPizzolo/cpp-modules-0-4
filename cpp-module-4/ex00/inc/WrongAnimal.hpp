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
		virtual void makeSound() const;
		virtual std::string getType( void ) const;
		virtual ~WrongAnimal();
};

#endif