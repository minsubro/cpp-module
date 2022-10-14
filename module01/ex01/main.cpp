/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:12:18 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 17:18:01 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie	*zombies = zombieHorde(n, "zombie");
	for(int i = 0; i<5; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
}