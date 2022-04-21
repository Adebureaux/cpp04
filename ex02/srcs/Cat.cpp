#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Default Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	this->brain = other.brain;
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
