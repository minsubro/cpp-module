/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:49:28 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/25 12:49:29 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	Fixed::num = 0;
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
	this->num = origin.num;
}

Fixed &Fixed::operator = (const Fixed& origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = origin.num;
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

bool	Fixed::operator>(const Fixed &s1) const {
	return this->getRawBits() > s1.getRawBits();
}

bool	Fixed::operator<(const Fixed &s1) const {
	return this->getRawBits() < s1.getRawBits();
}

bool	Fixed::operator>=(const Fixed &s1) const {
	return this->getRawBits() >= s1.getRawBits();
}

bool	Fixed::operator<=(const Fixed &s1) const {
	return this->getRawBits() <= s1.getRawBits();
}

bool	Fixed::operator==(const Fixed &s1) const {
	return this->getRawBits() == s1.getRawBits();
}

bool	Fixed::operator!=(const Fixed &s1) const {
	return this->getRawBits() != s1.getRawBits();
}

Fixed	Fixed::operator+(const Fixed s1) const {
	Fixed tmp;
	tmp.num = this->getRawBits() + s1.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed s1) const {
	Fixed fixed;
	fixed.num = this->getRawBits() - s1.getRawBits();
	return (fixed);
}

Fixed	Fixed::operator/(const Fixed s1) const {
	Fixed fixed(this->toFloat() / s1.toFloat());
	return (fixed);
}

Fixed	Fixed::operator*(const Fixed s1) const {
	Fixed fixed(this->toFloat() * s1.toFloat());
	return (fixed);
}

Fixed&	Fixed::operator++() {
	this->num++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed&	Fixed::operator--() {
	this->num--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return (temp);
}

Fixed&	Fixed::min(Fixed& s1, Fixed& s2)
{
	if (s1 >= s2)
		return (s2);
	return (s1);
}

const Fixed&	Fixed::min(const Fixed& s1, const Fixed& s2)
{
	if (s1 >= s2)
		return (s2);
	return (s1);
}

Fixed&	Fixed::max(Fixed& s1, Fixed& s2)
{
	if (s1 <= s2)
		return (s2);
	return (s1);
}

const Fixed&	Fixed::max(const Fixed& s1, const Fixed& s2)
{
	if (s1 <= s2)
		return (s2);
	return (s1);
}