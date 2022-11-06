/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:58:52 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 17:14:58 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap  {
	private :
		std::string name;
	public :
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator=(const DiamondTrap&);
		void 	attack(const std::string& name);
		void	whoAmI();
		void	printinfo();
};

#endif