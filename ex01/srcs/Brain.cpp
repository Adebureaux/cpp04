#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	this->ideas[0] = "Bark";
	this->ideas[50] = "Tuna";
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{

	return (*this);
}

Brain::~Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}
