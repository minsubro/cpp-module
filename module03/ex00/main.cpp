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
	ClapTrap a("a");
	ClapTrap b("b");

	a.attack("b");
	a.takeDamage(100);
	a.attack("c");

	for(int i = 0; i<10; i++) {
		b.attack("c");
	}
	b.attack("c");
	b.beRepaired(100);
}