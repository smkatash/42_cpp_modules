/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/24 19:35:28 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int					_fixedValue;
		static const int	_fractionBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& Parent);
		Fixed& operator=(const Fixed& cpyParent);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif