#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal"), sound("Unknown wrong animal sound")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->sound << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Default WrongAnimal copy constructor called" << std::endl;
	*this = other;
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	this->sound = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}
