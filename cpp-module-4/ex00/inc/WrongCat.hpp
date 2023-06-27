#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        WrongCat(WrongCat &copy);
		WrongCat &operator=(const WrongCat &src);
        void    makeSound(void) const;
        ~WrongCat();
};

#endif