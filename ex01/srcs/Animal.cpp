#include "../includes/Animal.hpp"

Animal::Animal() : type("Unknown animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Default Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Unknown animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
