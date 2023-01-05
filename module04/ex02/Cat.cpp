#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Brain& origin) {
	std::cout << "Cat brain constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain(origin);
}

Cat::Cat(const Cat& origin) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*origin.brain);
	this->type = origin.type;
}

Cat& Cat::operator=(const Cat& origin) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &origin) {
		delete this->brain;
		this->brain = new Brain(*origin.brain);
		this->type = origin.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "meow meow meow meow meow meow meeeeeeoooowwwwww!!!!!" << std::endl;
}

void	Cat::printBrain() {
	for(int i = 0; i<10; i++) {
		this->brain->printIdea(i);
	}
}

void	Cat::setBrain(std::string set) {
	this->brain->BrainSet(set);
}