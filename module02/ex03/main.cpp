/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:58:04 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 20:03:24 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	{
		Point a(0, 1);
		Point b(30, 30);
		Point c(30, 60);
		Point point(1, 2);
		if (bsp(a, b, c, point))
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
	}

	{
		Point a(0, 0);
		Point b(5, 5);
		Point c(10,5);
		Point point(12, 20);
		if (bsp(a, b, c, point))
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
	}
}