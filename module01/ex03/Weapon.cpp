/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:49:10 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 15:04:00 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return (Weapon::type);
}

void	Weapon::setType(std::string type)
{
	Weapon::type = type;
}

Weapon::Weapon(std::string type)
{
	Weapon::type = type;	
}
