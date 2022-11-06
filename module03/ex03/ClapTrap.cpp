/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:10:50 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 17:10:00 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	ClapTrap::name = "minsu";
	ClapTrap::Hit_Point = 0;
	ClapTrap::Energy_point = 0;
	ClapTrap::Attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;

}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->Hit_Point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
	std::cout << "CalpTrap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->name = origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Energy_point = origin.Energy_point;
	this->Attack_damage = origin.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& origin) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->name	= origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Attack_damage = origin.Attack_damage;
	this->Energy_point = origin.Energy_point;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if(this->Hit_Point <= 0) {
		std::cout << "Hit point is not enough" << std::endl;
		return ;
	}
	else if (this->Energy_point <= 0) {
		std::cout << "Energy is not enough" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->Hit_Point > 0)
		this->Hit_Point -= amount;
	std::cout << this->name << " suffered " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if(this->Hit_Point <= 0) {
		std::cout << this->name << " Hit point is not enough" << std::endl;
		return ;
	}
	else if (this->Energy_point <= 0) {
		std::cout << this->name << " Energy is not enough" << std::endl;
		return ;
	}
	Hit_Point += amount;
	std::cout << this->name << " recovered " << amount << " Hit_Point" << std::endl;
}