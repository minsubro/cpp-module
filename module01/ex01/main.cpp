/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:12:18 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 13:03:55 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 100;
	Zombie	*zombies = zombieHorde(n, "minsukan");
	for(int i = 0; i<n; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	system("leaks Zombie");
}