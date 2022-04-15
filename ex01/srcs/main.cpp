#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	const Animal* meta[100];

	for (int i = 0; i < 50; i++)
		meta[i] = new Dog();
	for (int i = 50; i < 100; i++)
		meta[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete meta[i];
	return (0);
}
