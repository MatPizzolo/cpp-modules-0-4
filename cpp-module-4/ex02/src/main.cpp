#include <iostream>

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

void    test()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	system("leaks -q animal");
	std::cout << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;

	//Proof of deep copy
	Dog medor;
	Cat fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy = Dog(medor);
	Cat fifi_copy = Cat(fifi);

	//Array of animals
	std::cout << "Creating Array" << std::endl;
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	//Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	//Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	std::cout << "Deleting Array" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << "Finish deleting array" << std::endl;

}

int main()
{
	// SUMAR AL TEST, COMPROBACION DE QUE EN EL DEEP COPY LA IDEAS NO CAMBIAN
    test();
    system("leaks -q animal");
}