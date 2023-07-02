#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(Animal &copy);
		Animal &operator=(const Animal &src);
        virtual std::string getType(void) const;
        void makeSound(void) const;
        virtual ~Animal();
};

#endif