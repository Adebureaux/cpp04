#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Default WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Unknown wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
