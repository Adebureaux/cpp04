#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Default Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
