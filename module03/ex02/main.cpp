/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:28:24 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/26 12:10:20 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("a");
	FragTrap b(a);
	FragTrap c;
	c = b;

	a.attack("b");
	//a.beRepaired(200);
	a.guardGate();
	a.highFivesGuys();
	a.takeDamage(99);
	a.attack("b");
	a.takeDamage(1);
	a.attack("b");
}