#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
		*this->brain = *rhs.brain;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat distructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << type << ": meow..." << std::endl
			  << std::endl;
}