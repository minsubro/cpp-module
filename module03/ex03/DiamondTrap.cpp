/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:58:52 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 17:38:26 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name") {
	DiamondTrap::name = "default";
	Hit_Point = 100;
	Energy_point = 50;
	Attack_damage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name") {
	DiamondTrap::name = _name;
	DiamondTrap::Attack_damage = 30;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& origin) : ClapTrap(origin)/*, ScavTrap(origin), FragTrap(origin)*/ {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	this->name = origin.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin) {
	this->name		= origin.name;
	this->Hit_Point = origin.Hit_Point;
	this->Energy_point = origin.Energy_point;
	this->Attack_damage = origin.Attack_damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& name) {
	ScavTrap::attack(name);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << this->name << " ClapTrap name is "
			<< ClapTrap::name << std::endl;
}

void	DiamondTrap::printinfo() {
	std::cout << "name = " << this->name << std::endl;
	std::cout << "ClapTrap_name = " << ClapTrap::name << std::endl;
	std::cout << "Hit_Point = " << this->Hit_Point << std::endl;
	std::cout << "Energy_point = " << this->Energy_point << std::endl;
	std::cout << "Attack_dameage = " << this->Attack_damage << std::endl;
}