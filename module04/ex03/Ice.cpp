#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& origin): AMateria(origin.type) {
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& origin) {
	std::cout << "Ice copy assignment operator called";
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

AMateria* Ice::clone() const {
	AMateria *temp = new Ice();
	return temp;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

