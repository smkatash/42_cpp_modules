/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:52:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/02 00:10:56 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template <typename T>
void putString(const T& a)
{
	std::cout << a << " ";
}

#endif