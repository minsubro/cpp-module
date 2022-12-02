/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:50:10 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 19:57:35 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private :
		const Fixed x;
		const Fixed y;
	public :
		Point();
		Point(const float x, const float y);
		Point(const int x, const int y);
		Point(const Point& origin);
		Point& operator=(const Point& origin);
		~Point();
		float getxfloat() const;
		float getyfloat() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif