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
	this->brain = other.brain;
	this->type = other.type;
	this->sound = other.sound;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}
