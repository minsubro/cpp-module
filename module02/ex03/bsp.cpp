/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:43:12 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 20:03:57 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	cal_area(Point const s1, Point const s2, Point const s3) {
	float area = (s1.getxfloat() * s2.getyfloat() + s2.getxfloat() * s3.getyfloat() + s3.getxfloat() * s1.getyfloat()) \
					- (s1.getxfloat() * s3.getyfloat() + s3.getxfloat() * s2.getyfloat() + s2.getxfloat() * s1.getyfloat());
	if (area < 0)
		area *= -1;
	return (area / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	triangle_area, a_temp, b_temp, c_temp;
	
	if ((triangle_area = (cal_area(a, b, c))) == 0)
		return false;
	if ((a_temp = cal_area(point, b, c)) == 0)
		return false;
	if ((b_temp = cal_area(a, point, c)) == 0)
		return false;
	if ((c_temp = cal_area(a, b, point)) == 0)
		return false;
	if (triangle_area == a_temp + b_temp + c_temp)
		return true;
	else
		return false;
}