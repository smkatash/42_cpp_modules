/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:54:35 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 21:04:47 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <iostream>
# include <string>

typedef struct
{
	std::string	firstName;
	std::string lastName;
	int			age;
	double		level;
} Data;

Data*       deserialize(uintptr_t raw);
uintptr_t   serialize(Data* ptr);

#endif
