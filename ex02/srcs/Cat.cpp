#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : brain(NULL)
{
	std::cout << "Default Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Default Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
