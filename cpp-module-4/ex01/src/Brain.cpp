#include "../inc/Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Charly es el mejor artista del mundo";
	std::cout << "Brain constructor called and filled with ideas\n";
}

Brain::Brain(Brain &copy)
{
	this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i] + " stolen";
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::string *rhs_ideas = rhs.getIdeas();
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs_ideas[i];
    std::cout << "Brain assign operator called" << std::endl;
    return (*this);
}

std::string *Brain::getIdeas() const
{
	return (this->ideas);
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain destructor called" << std::endl;
}
