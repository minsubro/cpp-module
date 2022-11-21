/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:26:13 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 20:07:09 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("bb");
	zombie->announce();
	delete zombie;
	zombie = newZombie("cc");
	zombie->announce();
	delete zombie;
	zombie = newZombie("d");
	zombie->announce();
	delete zombie;
	zombie = newZombie("e");
	zombie->announce();
	delete zombie;
	randomChump("cc");
	randomChump("minsukan!");
	system("leaks Zombie");
}