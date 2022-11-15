/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:38:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 14:55:08 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename Type>
void swap(Type& a, Type& b)
{
	Type tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename Type>
const Type& min(const Type& a, const Type& b)
{
	return (a < b) ? a : b;
}

template <typename Type>
const Type& max(const Type& a, const Type& b)
{
	return (a > b) ? a : b;
}

#endif
