/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:38:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/16 11:12:20 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

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
