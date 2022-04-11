#include "../includes/Animal.hpp"

Animal::Animal() : type("Unknown animal"), sound("Unknown animal sound") {}

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
	return;
}
