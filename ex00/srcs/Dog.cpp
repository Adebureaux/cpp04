#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->sound = "Woof";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	this->sound = other.sound;
	return (*this);
}

Dog::~Dog()
{
	return;
}
