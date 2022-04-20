#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	void putIdea(const std::string idea, int index);
	std::string getIdea(int index) const;

	private:
	Brain* brain;
};

#endif
