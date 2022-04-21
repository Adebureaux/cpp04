#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Default WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow" << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}
