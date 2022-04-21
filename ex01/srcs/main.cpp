#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	Animal *meta[10];

	for (int i = 0; i < 5; i++)
		meta[i] = new Dog();
	for (int i = 5; i < 10; i++)
		meta[i] = new Cat();

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "meta[" << i << "] is a " << meta[i]->getType() << std::endl;
	std::cout << std::endl;

	// Create an unknown animal
	const Animal *unknown = new Animal();
	std::cout << "The " << unknown->getType() << " do : ";
	unknown->makeSound();
	std::cout << std::endl;

	// Create a cat
	const Animal *cat = new Cat();
	std::cout << "The " << cat->getType() << " do : ";
	cat->makeSound();
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak
	delete i;

	// Generates ideas
	Animal *dog1 = new Dog();

	// Create a copy
	Animal *dog2;
	dog2 = dog1;

	for (int i = 0; i < 10; i++)
		delete meta[i];
	delete dog1;
	delete unknown;
	delete cat;
	return (0);
}
