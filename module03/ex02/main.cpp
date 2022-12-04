/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:28:24 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 14:08:37 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("a");
	std::cout << "--------------------" << std::endl;
	FragTrap b(a);
	std::cout << "--------------------" << std::endl;
	FragTrap c;
	std::cout << "--------------------" << std::endl;
	c = b;

	a.attack("b");
	a.beRepaired(200);
	a.highFivesGuys();
	a.highFivesGuys();
	a.takeDamage(99);
	a.attack("b");
	a.takeDamage(1);
	a.attack("b");
}