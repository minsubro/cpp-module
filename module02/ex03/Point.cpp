/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:13 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 19:57:56 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :
	x(0),
	y(0) {}

Point::Point(const float x, const float y) :
	x(x),
	y(y) {}

Point::Point(const Point& origin) :
	x(origin.x),
	y(origin.y) {}

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