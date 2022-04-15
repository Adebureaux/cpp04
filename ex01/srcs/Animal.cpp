#include "../includes/Animal.hpp"

Animal::Animal() : type("Unknown animal"), sound("Unknown animal sound")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << this->sound << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::Animal(const Animal &other)
{
	std::cout << "Default Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	this->sound = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}
