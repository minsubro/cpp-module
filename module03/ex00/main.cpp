/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:28:24 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/26 11:30:31 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "ClapTrap 생성" << std::endl;
	ClapTrap a("a");
	ClapTrap b("b");

	std::cout << "--------------------------------" << std::endl;
	a.attack("b");
	a.takeDamage(100);
	a.attack("c");
	std::cout << "--------------------------------" << std::endl;

	for(int i = 0; i<10; i++) {
		b.attack("c");
	}
	b.attack("c");
	b.beRepaired(100);
	std::cout << "--------------------------------" << std::endl;
	std::cout << "ClapTrap 소멸" << std::endl;
}