/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:33:41 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/24 12:54:13 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int num) {
	std::cout << "Int constructor called" << std::endl;
	this->num = num << this->bit;
}

Fixed::Fixed(float num) {
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(num * (1<<this->bit));
}

Fixed::Fixed(const Fixed& origin) {
	std::cout << "Copy constructor called" << std::endl;
	this->num = origin.getRawBits();
}

Fixed& Fixed::operator = (const Fixed& origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = origin.getRawBits();
	return	*this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return Fixed::num;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

int	Fixed::toInt() const {
	return this->num >> 8;
}

float	Fixed::toFloat() const {
	return (((float)this->num) / 256);
}

std::ostream& operator << (std::ostream &out, Fixed const &fixed) {
		out << fixed.toFloat();
		return out;
}
