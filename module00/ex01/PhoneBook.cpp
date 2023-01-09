/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:40:05 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/20 19:40:05 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::add(int idx) {
	if (!contact[idx].add())
		return (0);
	return (1);
}

static void contour() {
	std::cout << " ";
	for(int i = 0; i<43; i++)
		std::cout << "-";
	std::cout << " \n";
}

int	PhoneBook::search() {
	std::string idx;
	int			i;

	contour();
	std::cout << "|" << std::setw(10) << "index"  << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|\n";
	contour();
	for(int i = 0; i < 8; i++) {
		contact[i].print(i + 1);
	}
	contour();
	while (1)
	{
		std::cout << "Enter the index you are looking for or EXIT : ";
		if (!getline(std::cin, idx))
			return (0);
		i = atoi(idx.c_str());
		if (idx.size() == 0)
			std::cout << "Can't be empty" << std::endl;
		else if (i < 1 && i > 8)
			std::cout << "Invalid number" << std::endl;
		else if (idx.compare("EXIT") == 0 || idx.compare("exit") == 0)
			break;
		else if (i >= 1 && i <= 8)
		{
			contact[i - 1].all_print(i);
			break ;
		}
		else
			std::cout << "Invalid idx Please enter it again" << std::endl;
	}
	return (1);
}