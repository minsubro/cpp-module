#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& origin) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*origin.brain);
	this->type = origin.type;
}

Dog& Dog::operator=(const Dog& origin) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &origin) {
		delete this->brain;
		this->brain = new Brain(*origin.brain);
		this->type = origin.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "bowwow bowwow bowwow bowwow bowwow bowwow bowwow bowwow bowwow" << std::endl;
}

void	Dog::myBrainSet(const std::string& set) {
	this->brain->BrainSet(set);
}

void	Dog::printBrain() {
	for(int i = 0; i<10; i++) {
		this->brain->printIdea(i);
	}
}

void	Dog::setBrain(std::string set) {
	this->brain->BrainSet(set);
}