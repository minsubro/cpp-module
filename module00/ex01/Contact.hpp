/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:32 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/10 10:59:57 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
public :
		void add();
		void print(int idx);
		void all_print(int idx);
};

void	Contact::add() {
	
	std::string input;

	while (1)
	{
		std::cout << "Please enter a first name : ";
		getline(std::cin, input);
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
		getline(std::cin, input);
		if (input.size() > 0)
		{
			Contact::last_name = input;
			break ;
		}
	}
	while (1)
	{
		std::cout << "Please enter a nickname : ";
		getline(std::cin, input);
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
		getline(std::cin, input);
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
		getline(std::cin, input);
		if (input.size() > 0)
		{
			Contact::darkest_secret = input;
			break ;
		}
		std::cout << "Can't be empty\n";
	}
}

void Contact::print(int idx) {
	Contact::first_name = Contact::first_name.size() > 10 ? Contact::first_name.substr(0, 9) + '.' : Contact::first_name;
	Contact::last_name = Contact::last_name.size() > 10 ? Contact::last_name.substr(0, 9) + '.' : Contact::last_name;
	Contact::nickname = Contact::nickname.size() > 10 ? Contact::nickname.substr(0, 9) + '.' : Contact::nickname;
	std::cout << "|" << std::setw(10) << idx << "|" << std::setw(10) << Contact::first_name << "|" << std::setw(10) << Contact::last_name << "|" << std::setw(10) << Contact::nickname << "|" << std::endl;
}

void Contact::all_print(int idx) {
	std::cout << "first name : " << Contact::first_name << std::endl;
	std::cout << "last name : " << Contact::last_name << std::endl;
	std::cout << "nickname : " << Contact::nickname << std::endl;
	std::cout << "phone number : " << Contact::phone_number << std::endl;
	std::cout << "darkest_secret : " << Contact::darkest_secret << std::endl;
}


