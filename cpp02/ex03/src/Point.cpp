/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:57:05 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/07 22:31:24 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y) : 
	_x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point& Parent)
	: _x(Parent._x), _y(Parent._y) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& cpyParent)
{
	(void)cpyParent;
	std::cout << "Assignment of const variables impossible, values will stay the same as in the default constructor." << std::endl;
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}