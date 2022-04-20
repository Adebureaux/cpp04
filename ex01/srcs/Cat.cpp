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
	Animal::operator=(other);
	this->brain = other.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::putIdea(const std::string idea, int index)
{
	this->brain->putIdea(idea, index);
}

std::string Cat::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}
