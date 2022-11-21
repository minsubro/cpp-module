/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:30:37 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/16 00:47:38 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mystd.hpp"

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Invalid argument...." << std::endl;
		return (0);
	}
	mystd::replace(av[1], av[2], av[3]);
	return (0);
}