/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:54:35 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/13 17:27:39 by ktashbae         ###   ########.fr       */
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

uintptr_t		serialize(Data* ptr);
Data*			deserialize(uintptr_t raw);
void*			serialize_void(Data* ptr);
Data*			deserialize_void(void *raw);

#endif
