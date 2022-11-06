/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:04:50 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/06 14:03:03 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public :
		ScavTrap();
		ScavTrap(const std::string& name);
		~ScavTrap();
		ScavTrap(const ScavTrap& origin);
		ScavTrap& operator=(const ScavTrap& origin);
		void	guardGate();
		void	attack(const std::string& name);
};

#endif