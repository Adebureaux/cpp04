#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound() const;
	uintptr_t getBrainAddress(void);

	private:
	Brain* brain;
};

#endif
