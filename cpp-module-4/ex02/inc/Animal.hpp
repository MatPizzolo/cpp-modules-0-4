#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    
    public:
		Animal &operator=(const Animal &src);
        virtual std::string getType(void) const = 0;
        virtual void makeSound(void) const = 0;
        virtual ~Animal();
};

#endif