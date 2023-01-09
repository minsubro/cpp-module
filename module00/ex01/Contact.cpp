/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:39:56 by minsukan          #+#    #+#             */
/*   Updated: 2022/11/20 19:39:56 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::add() {
	
	std::string input;

	while (1)
	{
		std::cout << "Please enter a first name : ";
		if (!getline(std::cin, input))
			return (0);
		if (input.size() > 0)
		{
			Contact::first_name = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
	while (1)
	{
		std::cout << "Please enter a last name : ";
		if (!getline(std::cin, input))
			return (0);
		if (input.size() > 0)
		{
			Contact::last_name = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
	while (1)
	{
		std::cout << "Please enter a nickname : ";
		if (!getline(std::cin, input))
			return (0);
		if (input.size() > 0)
		{
			Contact::nickname = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
	while (1)
	{
		std::cout << "Please enter a phonenumber : ";
		if (!getline(std::cin, input))
			return (0);
		if (input.size() > 0)
		{
			Contact::phone_number = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
	while (1)
	{
		std::cout << "Please enter a darkest secret : ";
		if (!getline(std::cin, input))
			return (0);
		if (input.size() > 0)
		{
			Contact::darkest_secret = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
	return (1);
}

void Contact::print(int idx) {
	std::string first_name = Contact::first_name.size() > 10 ? Contact::first_name.substr(0, 9) + '.' : Contact::first_name;
	std::string last_name = Contact::last_name.size() > 10 ? Contact::last_name.substr(0, 9) + '.' : Contact::last_name;
	std::string nickname = Contact::nickname.size() > 10 ? Contact::nickname.substr(0, 9) + '.' : Contact::nickname;
	std::cout << "|" << std::setw(10) << idx << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nickname << "|" << std::endl;
}

void Contact::all_print(int idx) {
	std::cout << "first name : " << Contact::first_name << std::endl;
	std::cout << "last name : " << Contact::last_name << std::endl;
	std::cout << "nickname : " << Contact::nickname << std::endl;
	std::cout << "phone number : " << Contact::phone_number << std::endl;
	std::cout << "darkest_secret : " << Contact::darkest_secret << std::endl;
}