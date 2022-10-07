/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:45:09 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/07 10:18:14 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
private :
		Contact contact[8];
public :
		void add(int idx);
		void search();
};

void PhoneBook::add(int idx) {
	contact[idx].add();
}

static void contour() {
	std::cout << " ";
	for(int i = 0; i<43; i++)
		std::cout << "-";
	std::cout << " \n";
}

void PhoneBook::search() {
	contour();
	std::cout << "|" << std::setw(10) << "index"  << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|\n";
	contact.print();
	contour();
	
}
