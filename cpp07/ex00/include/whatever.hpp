/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:38:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/14 01:44:54 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
const T& min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template <class T>
const T& max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

#endif
