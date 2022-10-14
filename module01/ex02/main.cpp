/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:22:57 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/14 17:39:44 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string A = "HI THIS IS BRAIN";
	std::string *stringPTR = &A;
	std::string &stringREF = A;
	
	std::cout << "A address = " << &A << std::endl;
	std::cout << "stringPTR address = " << stringPTR << std::endl;
	std::cout << "stringREF address = " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "A value = " << A << std::endl;
	std::cout << "stringPTR value = " << *stringPTR << std::endl;
	std::cout << "stringREF value = " << stringREF << std::endl;
}