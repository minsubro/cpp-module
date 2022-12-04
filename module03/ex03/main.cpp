/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:28:24 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 17:12:58 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("abcd");
	a.whoAmI();
	a.attack("abc");
	a.printinfo();
	std::cout << "----------------------" << std::endl;
	DiamondTrap b;
	b.whoAmI();
	b.attack("abc");
	b.printinfo();
	std::cout << "----------------------" << std::endl;
	DiamondTrap c(a);
	c.whoAmI();
	c.attack("abc");
	c.printinfo();
}