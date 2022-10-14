/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:19:56 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 16:20:29 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int	i = 0;
	
	Zombie *zombie = new Zombie[n];
	for(int i = 0; i<n; i++)
		zombie[i].set_name(name);
	return (zombie);
}
