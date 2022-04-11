#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	~Animal();
	void makeSound() const;
	std::string getType() const;

	protected:
	std::string type;
	std::string sound;
};

#endif
