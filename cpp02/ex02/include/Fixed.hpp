/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/26 11:17:11 by kanykei          ###   ########.fr       */
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
		// Constructors/Destructors
		Fixed( void );
		Fixed(int const param);
		Fixed(float const param);
		Fixed(const Fixed& Parent);
		~Fixed( void );
		// Overloaded member functions 
		static			Fixed& min(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		// Assignment operator
		Fixed& operator=(const Fixed& cpyParent);
		//Comparison operators
		bool operator>(const Fixed& param);		//Greater than operator
		bool operator<(const Fixed& param);		//Less than operator
		bool operator>=(const Fixed& param);	//Greater than or equal to operator
		bool operator<=(const Fixed& param);	//Less than or equal to operator
		bool operator==(const Fixed& param);	//Equal to operator
		bool operator!=(const Fixed& param);	//Not equal to operator

		//Arithmetic operators
		Fixed operator+(const Fixed& param);	//Addition operator
		Fixed operator-(const Fixed& param);	//Subtraction operator
		Fixed operator*(const Fixed& param);	//Multiplication operator
		Fixed operator/(const Fixed& param);	//Division operator

		//Unary increment/decrement operators
		Fixed& operator++();					//Prefix increment operator
		Fixed& operator--();					//Prefix decrement operator
		Fixed operator++(int);					//Postfix increment operator
		Fixed operator--(int);					//Postfix decrement operator
		
};

std::ostream& operator<<(std::ostream& floatingPoint, const Fixed& fixedPoint);

#endif
