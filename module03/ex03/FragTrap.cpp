#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	FragTrap::Hit_Point = 100;
	FragTrap::Energy_point = 100;
	FragTrap::Attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	FragTrap::Hit_Point = 100;
	FragTrap::Energy_point = 100;
	FragTrap::Attack_damage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& origin) {
	this->name = origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Energy_point = origin.Energy_point;
	this->Attack_damage = origin.Attack_damage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& origin) {
	this->name = origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Energy_point = origin.Energy_point;
	this->Attack_damage = origin.Attack_damage;
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	if (this->Hit_Point == 0) {
		std::cout << this->name << " Hit point is not enough" << std::endl;
	}
	else if (this->Energy_point == 0) {
		std::cout << this->name << " Energy point is not enough" << std::endl;
	}
	std::cout << "Give me a highfives!!!!!!" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if(this->Hit_Point <= 0) {
		std::cout << this->name << " Hit point is not enough" << std::endl;
		return ;
	}
	else if (this->Energy_point <= 0) {
		std::cout << this->name << " Energy is not enough" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_point--;
}