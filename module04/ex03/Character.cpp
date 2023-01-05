#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const & name) {
	std::cout << "Character constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character& origin) {
	std::cout << "Character copy constructor called" << std::endl;
	this->name = origin.getName();
	for (int i = 0; i < 4; i++) {
		const AMateria *Materia = origin.getMateriaByIdx(i);
		if (Materia) {
			this->inventory[i] = Materia->clone();
		}
		else {
			this->inventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& origin) {
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &origin) {
		this->name = origin.getName();
		for (int i = 0; i<4; i++) {
			const AMateria *tmp = origin.getMateriaByIdx(i);
			if (this->inventory[i])
				delete this->inventory[i];
			if (tmp)
				this->inventory[i] = tmp->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
		}
	}
}

std::string const &Character::getName() const {
	return this->name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i<4; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (0 <= idx && idx < 4) {
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (0 <= idx && idx < 4) {
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
	}
}

AMateria const *Character::getMateriaByIdx(int idx) const {
	return inventory[idx];
}
