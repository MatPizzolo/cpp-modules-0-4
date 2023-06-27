#include "../inc/Brain.hpp"
#include "../inc/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";    
    this->brain = new Brain;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain;
    *(this->brain) = Brain(*(copy.brain));
}

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Comparing two dogs\n";
	std::cout << "My brain's heap address: " << reinterpret_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << reinterpret_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->type);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->brain;
}