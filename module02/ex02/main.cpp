/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:13:30 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 10:44:30 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << b * a << std::endl;
	std::cout << b + a << std::endl;
	std::cout << b / a << std::endl;
	
	Fixed c = (Fixed(6) * Fixed(10));

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	


	return 0;
}