/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/26 01:21:13 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_fixedValue;
		static const int	_fractionBits = 8;

	public:
		Fixed( void );
		Fixed(int const param);
		Fixed(float const param);
		Fixed(const Fixed& Parent);
		Fixed& operator=(const Fixed& cpyParent);
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
};
std::ostream& operator<<(std::ostream& floatingPoint, const Fixed& fixedPoint);

#endif
