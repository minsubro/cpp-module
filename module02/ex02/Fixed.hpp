/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:05:38 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/24 19:07:59 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private :
		int					num;
		static const int	bit = 8;
	public :
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed& origin);
		Fixed& operator=(const Fixed& origin);
		~Fixed();
		int		toInt() const;
		float	toFloat() const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		bool	operator>(Fixed &s1);
		bool	operator<(Fixed &s1);
		bool	operator>=(Fixed &s1);
		bool	operator<=(Fixed &s1);
		bool	operator==(Fixed &s1);
		bool	operator!=(Fixed &s1);
		friend std::ostream& operator << (std::ostream &out, Fixed const &fixed);
		Fixed	operator+(Fixed& s1);
		Fixed	operator-(Fixed& s1);
		Fixed	operator*(Fixed& s1);
		Fixed	operator/(Fixed& s1);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		
		
};

#endif