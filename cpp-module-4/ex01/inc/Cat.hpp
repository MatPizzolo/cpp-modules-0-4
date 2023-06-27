#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain* brain;

    public:
        Cat();
        Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
        void makeSound(void) const;
        Brain *getBrain( void ) const;
        void compareTo(Cat const & other_cat) const;
        ~Cat();
};

#endif