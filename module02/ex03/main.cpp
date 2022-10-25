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
	Point a(0, 1);
	Point b(1, 1);
	Point c(100, 1);
	Point Point(3, 3);
	if (bsp(a, b, c, Point))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}