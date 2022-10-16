/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:27:29 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/16 02:28:56 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Invalid argument...." << std::endl;
		return (0);
	}
	Harl harl;
	harl.complain(av[1]);
}