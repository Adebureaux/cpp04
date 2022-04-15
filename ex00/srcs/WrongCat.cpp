#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Default WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	this->sound = other.sound;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}
