#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& origin) {
	this->type = origin.type;
}

AMateria	&AMateria::operator=(const AMateria& origin) {
	this->type = origin.type;
	return *this;
}

void	AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "use?" << std::endl;
}

std::string const &AMateria::getType() const {
	return this->type;
}