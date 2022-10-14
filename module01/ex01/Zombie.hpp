/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:50:46 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 17:16:21 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
	private :
		std::string name;
	
	public :
		void	announce(void);
		void	set_name(std::string name);
		void	die();
};

Zombie	*zombieHorde(int n, std::string name);

#endif