/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:10:47 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/27 10:23:27 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	ScavTrap::Hit_Point = 100;
	ScavTrap::Energy_point = 50;
	ScavTrap::Attack_damage = 20;
};

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	ScavTrap::Hit_Point = 100;
	ScavTrap::Energy_point = 50;
	ScavTrap::Attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& origin) {
	this->name = origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Energy_point = origin.Energy_point;
	this->Attack_damage = Attack_damage;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin) {
	this->name = origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Attack_damage = origin.Attack_damage;
	this->Energy_point = origin.Energy_point;
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	return *this;
}

void ScavTrap::guardGate() {
	if (this->Hit_Point == 0) {
		std::cout << this->name << " Hit point is not enough" << std::endl;
	}
	else if (this->Energy_point == 0) {
		std::cout << this->name << " Energy point is not enough" << std::endl;
	}
	else
		std::cout << this->name << " is Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if(this->Hit_Point <= 0) {
		std::cout << this->name << " Hit point is not enough" << std::endl;
		return ;
	}
	else if (this->Energy_point <= 0) {
		std::cout << this->name << " Energy is not enough" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_point--;
}