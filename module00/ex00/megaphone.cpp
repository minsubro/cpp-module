/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:39:44 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/20 19:39:44 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; av[i]; i++)
		{
			std::string str(av[i]);
			for(int j = 0; j<str.length(); j++)
			{
				str[j] = std::toupper(str[j]);
			}
			std::cout << str;
		}
		std::cout << "\n";
	}
}