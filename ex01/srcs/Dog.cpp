#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
	this->sound = "Woof";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Default Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	this->brain = other.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::putIdea(const std::string idea, int index)
{
	this->brain->putIdea(idea, index);
}

std::string Dog::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}
