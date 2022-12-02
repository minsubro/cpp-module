/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:26:04 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/24 13:45:01 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
		
};

std::ostream& operator << (std::ostream &out, Fixed const &fixed);

#endif