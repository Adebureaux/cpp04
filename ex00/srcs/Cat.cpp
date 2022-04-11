#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->sound = "Meow";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	this->sound = other.sound;
	return (*this);
}

Cat::~Cat()
{
	return;
}
