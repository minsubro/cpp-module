/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:57:02 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/15 17:57:58 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	private :
		std::string type;
	public :
		Weapon(){}
		Weapon(std::string type);
		const std::string&	getType();
		void				setType(std::string type);
};

#endif