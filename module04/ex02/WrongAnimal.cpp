#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = origin.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin) {
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "How do WrongAnimals cry?" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}