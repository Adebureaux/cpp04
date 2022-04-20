#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
	virtual void putIdea(const std::string idea, int index) = 0;
	virtual std::string getIdea(int index) const = 0;

	protected:
	std::string type;
	std::string sound;
};

#endif
