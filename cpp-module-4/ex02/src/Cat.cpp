#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
    this->brain = new Brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain;
    *(this->brain) = Brain(*(copy.brain));
}

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meuw" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->type);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->brain;
}
