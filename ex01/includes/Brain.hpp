#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();
	void putIdea(const std::string idea, int index);
	std::string getIdea(int index) const;

	private:
	std::string ideas[100];
};

#endif
