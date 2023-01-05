#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& origin) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = origin.type;
}

Animal& Animal::operator=(const Animal& origin) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "How do animals cry?" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}