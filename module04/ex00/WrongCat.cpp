#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& origin) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = origin.type;
}

WrongCat& WrongCat::operator=(const WrongCat& origin) {
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "bow wow bow wow!!!" << std::endl;
}