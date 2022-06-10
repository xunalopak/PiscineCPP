#include "Brain.hpp"

Brain::Brain(Brain const &src)
{
	std::cout << "Copy construtor called for Brain" << std::endl;
	*this = src;
	return;
}

Brain::Brain()
{
	std::cout << "Default construtor called for Brain" << std::endl;
	return;
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
	return;
}

Brain & Brain::operator=(Brain const & other)
{
	std::cout << "Assignement operator for Brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}