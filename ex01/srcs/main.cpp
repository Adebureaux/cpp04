#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	Animal *meta[10];

	for (int i = 0; i < 5; i++)
		meta[i] = new Dog();
	for (int i = 5; i < 10; i++)
		meta[i] = new Cat();

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak
	delete i;

	// Generates ideas
	Animal *dog1 = new Dog();
	dog1->putIdea("eat the couch ...", 0);
	std::cout << "dog1 idea : " << dog1->getIdea(0) << std::endl;

	// Create a copy
	Animal *dog2;
	dog2 = dog1;
	std::cout << "dog2 idea : " << dog2->getIdea(0) << std::endl;

	for (int i = 0; i < 10; i++)
		delete meta[i];
	delete dog1;

	return (0);
}
