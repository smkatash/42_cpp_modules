/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:52:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 14:54:37 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename Type>
void iter(Type* array, size_t length, void (*f)(const Type&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template <typename Type>
void putString(const Type& a)
{
	std::cout << a << " ";
}

#endif
