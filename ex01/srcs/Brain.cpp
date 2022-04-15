#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	this->ideas[0] = "Bark";
	this->ideas[50] = "Tuna";
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
	std::cout << "Default Brain constructor called" << std::endl;
}
