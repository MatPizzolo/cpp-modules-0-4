#include <iostream>

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

void    test()
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;

	// This will fail because AAnimal is abstract!
	// const Animal a = new Animal();
	// Animal test;
}

int main()
{
    test();
    system("leaks -q animal");
}