#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include "Brain.hpp"

class Animal
{
	public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal() = 0;
	virtual void makeSound() const = 0;
	std::string getType() const;

	protected:
	std::string type;
};

#endif
