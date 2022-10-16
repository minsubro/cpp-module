/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:20:09 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/16 10:37:58 by minsukan         ###   ########.fr       */
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
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed& origin);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
};

#endif