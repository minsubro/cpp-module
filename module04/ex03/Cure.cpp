#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& origin): AMateria(origin.type) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& origin) {
	if (this != &origin)
		this->type = origin.type;
	return *this;
}

AMateria* Cure::clone() const {
	AMateria *temp = new Cure();
	return temp;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

