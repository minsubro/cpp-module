/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:13 by minsukan          #+#    #+#             */
/*   Updated: 2023/02/13 22:01:53 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float x, const float y) :
	x(x),
	y(y) {
		std::cout << "Point constructor called" << std::endl;
	}

Point::Point(const int x, const int y) : x(x), y(y) {
	std::cout << "Point int constructor called" << std::endl;
}

Point::Point(const Point& origin) :
	x(origin.x),
	y(origin.y) {
		std::cout << "Point Copy constructor called" << std::endl;
	}

Point::~Point() {
	std::cout << "Point destructor called" << std::endl;
}

Point& Point::operator=(const Point& origin) {
	(void)origin;
	return *this;
}

float	Point::getxfloat() const {
	return this->x.toFloat();
}

float	Point::getyfloat() const {
	return this->y.toFloat();
}

const int i = 5

i = 7;