#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& origin) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = origin.type;
}

Cat& Cat::operator=(const Cat& origin) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "meow meow meow meow meow meow meeeeeeoooowwwwww!!!!!" << std::endl;
}