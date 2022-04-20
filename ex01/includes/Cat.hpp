#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	void putIdea(const std::string idea, int index);
	std::string getIdea(int index) const;

	private:
	Brain* brain;
};

#endif
