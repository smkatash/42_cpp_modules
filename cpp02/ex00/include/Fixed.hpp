/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/07 21:25:05 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int					_fixedValue;
		static const int	_fractionBits = 8;

	// constructor & destructor
	// copy constructor
	// copy assignment operator overload.
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& Parent);
		Fixed& operator=(const Fixed& cpyParent);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif