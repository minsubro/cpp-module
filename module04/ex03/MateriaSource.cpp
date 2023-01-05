#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->save[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& origin) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		AMateria *tmp = origin.getMateria(i);
		if (tmp)
			this->save[i] = tmp->clone();
		else
			this->save[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& origin) {
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &origin) {
	for (int i = 0; i < 4; i++) {
			AMateria *tmp = origin.getMateria(i);
			if (this->save[i]) {
				delete this->save[i];
			}
			if (tmp) {
				this->save[i] = tmp->clone();
			}
			else {
				this->save[i] = NULL;
			}
	}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->save[i])
			delete this->save[i];
	}
}

AMateria	*MateriaSource::getMateria(int idx) const {
		return this->save[idx];
}


void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->save[i] == NULL) {
			this->save[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->save[i] && this->save[i]->getType() == type)
			return this->save[i]->clone();
	}
	return NULL;
}