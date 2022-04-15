#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
	this->sound = "Meow";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Default Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->brain = other.brain;
	this->type = other.type;
	this->sound = other.sound;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->brain;
}
