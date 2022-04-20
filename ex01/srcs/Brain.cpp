#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Default Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

void Brain::putIdea(const std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}
