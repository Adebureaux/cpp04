#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : brain(NULL)
{
	std::cout << "Default Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
