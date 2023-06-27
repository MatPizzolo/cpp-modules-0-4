#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain* brain;
        std::string type;

    public:
        Dog();
        Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
        void makeSound(void) const;
        Brain *getBrain( void ) const;
        std::string getType(void) const;
        void compareTo(Dog const & other_dog) const;
        ~Dog();
};

#endif