/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:11 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/26 11:17:45 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(int const param) {
	this->_fixedValue = param << _fractionBits;
}

Fixed::Fixed(float const param) {
	this->_fixedValue = int(roundf(param * (1 << _fractionBits)));
}

Fixed::Fixed(const Fixed& Parent) {
	this->_fixedValue = Parent.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& cpyParent) {
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

// Static member functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixedValue > b._fixedValue)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixedValue < b._fixedValue)
		return b;
	return a;
}

//Comparisson operators
bool Fixed::operator>(const Fixed& param) {
	return this->_fixedValue > param._fixedValue;
}

bool Fixed::operator<(const Fixed& param) {
	return this->_fixedValue < param._fixedValue;
}

bool Fixed::operator>=(const Fixed& param) {
	return this->_fixedValue >= param._fixedValue;
}

bool Fixed::operator<=(const Fixed& param) {
	return this->_fixedValue <= param._fixedValue;
}

bool Fixed::operator==(const Fixed& param) {
	return this->_fixedValue == param._fixedValue;
}

bool Fixed::operator!=(const Fixed& param) {
	return this->_fixedValue != param._fixedValue;
}

//Arithmetic operators
Fixed Fixed::operator+(const Fixed& param)
{
	Fixed sum;

	sum.setRawBits(this->_fixedValue + param._fixedValue);
	return sum;
}

Fixed Fixed::operator-(const Fixed& param)
{
	Fixed substr;

	substr.setRawBits(this->_fixedValue - param._fixedValue);
	return substr;
}

Fixed Fixed::operator*(const Fixed& param)
{
	Fixed multiplied;

	multiplied.setRawBits(this->_fixedValue * param._fixedValue);
	return multiplied;
}

Fixed Fixed::operator/(const Fixed& param)
{
	Fixed division;

	division.setRawBits(this->_fixedValue / param._fixedValue);
	return division;
}

//Unary increment/decrement operators
Fixed& Fixed::operator++()
{
	this->_fixedValue++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_fixedValue--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}
