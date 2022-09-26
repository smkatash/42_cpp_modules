/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:43:33 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/26 14:06:36 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point( void );
		Point(const float x, const float y);
		Point(const Point& Parent);
		Point& operator=(const Point& cpyParent);
		~Point( void );
		Fixed const getX(void) const;
		Fixed const getY(void) const;
};

bool bsp(Point const x, Point const y, Point const z, Point const point);

#endif