/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:55:47 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 13:59:52 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private :
		std::string name;

	public :
		void	announce(void);
		void	set_name(std::string name);
		void	die();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif