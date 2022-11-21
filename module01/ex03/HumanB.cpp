/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:05:54 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 16:09:35 by minsukan         ###   ########.fr       */ 
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (!HumanB::weapon)
		std::cout << HumanB::name << " attacks with their bare hands" << std::endl;
	else
		std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	HumanB::weapon = &weapon;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "Human B constructor";
}

HumanB::~HumanB() {
	std:: cout << "Human B destructor" << std::endl;
}