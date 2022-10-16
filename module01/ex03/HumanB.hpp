/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:40:33 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 20:17:47 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private :
		std::string name;
		Weapon	*weapon;
	public	:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
		
};


#endif