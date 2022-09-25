/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:11 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/26 01:21:56 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const param) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = param << _fractionBits;
}

Fixed::Fixed(float const param) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = int(roundf(param * (1 << _fractionBits)));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& Parent) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedValue = Parent.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& cpyParent) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = cpyParent._fixedValue;
	return *this;
}

int	Fixed::getRawBits(void) const {
	return this->_fixedValue;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
}

float	Fixed::toFloat(void) const {
	return float(this->_fixedValue) / (1 << _fractionBits);
}

int	Fixed::toInt(void) const {
	return this->_fixedValue  >> _fractionBits;
}

std::ostream& operator<<(std::ostream& floatingPoint, const Fixed& fixedPoint)
{
	floatingPoint << fixedPoint.toFloat();
	return floatingPoint;
}