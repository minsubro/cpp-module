#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& origin) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = origin.type;
}

Dog& Dog::operator=(const Dog& origin) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "bowwow bowwow bowwow bowwow bowwow bowwow bowwow bowwow bowwow" << std::endl;
}