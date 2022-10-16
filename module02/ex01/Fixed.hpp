/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:26:04 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/16 17:32:18 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FINXED_HPP

# include <iostream>

class Fixed {
	private :
		int					num;
		static const int	bit = 8;
	public :
		Fixed();
		Fixed(const Fixed& origin);
		Fixed& operator=(const Fixed& origin);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
};

#endif