/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:09:31 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 20:02:32 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with their " << HumanA::weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon) 
{
	std::cout << "Human A constructor" << std::endl;
}

HumanA::~HumanA() {
	std:: cout << "Human A destructor" << std::endl;
}