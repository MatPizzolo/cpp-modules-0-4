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
        virtual void    makeSound(void) const;
        virtual ~Cat();
};

#endif