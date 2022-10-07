/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:32 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/07 10:18:43 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
public :
		void add();
		void print();
};

void	Contact::add() {
	
	std::string input;

	while (1)
	{
		std::cout << "Please enter a first name : ";
		std::cin >> input;
		if (input.size() > 0)
		{
			Contact::first_name = input;
			input = "";
			break ;
		}
		input = "";
	}
	while (1)
	{
		std::cout << "Please enter a last name : ";
		std::cin >> input;
		if (input.size() > 0)
		{
			Contact::last_name = input;
			input = "";
			break ;
		}
	}
	while (1)
	{
		std::cout << "Please enter a nickname : ";
		std::cin >> input;
		if (input.size() > 0)
		{
			Contact::nickname = input;
			input = "";
			break ;
		}
	}
	while (1)
	{
		std::cout << "Please enter a phonenumber : ";
		std::cin >> input;
		if (input.size() > 0)
		{
			Contact::phone_number = input;
			input = "";
			break ;
		}
	}
	while (1)
	{
		std::cout << "Please enter a darkest secret : ";
		std::cin >> input;
		if (input.size() > 0)
		{
			Contact::darkest_secret = input;
			input = "";
			break ;
		}
	}
}

void Contact::print() {
	
}


