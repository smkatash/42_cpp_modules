/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:32:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/13 17:36:34 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <iomanip>
#include <iostream>

int main(void)
{
	Data	serial;

	serial.firstName = "Kanykei";
	serial.lastName = "Tashbaeva";
	serial.age = 27;
	serial.level = 4.23;

	std::cout << "first name: " << serial.firstName << std::endl;
	std::cout << "last name: " << serial.lastName << std::endl;
	std::cout << "age: " << serial.age << std::endl;
	std::cout << "level: " << serial.level << std::endl;
	std::cout << std::endl;
	
	uintptr_t	output_uintptr = serialize(&serial);
	void		*ptr1 = (void *)serialize(&serial);
	void		*ptr2 = &output_uintptr;
	
	Data		*deserial = deserialize(output_uintptr);
	std::cout << "uintptr_t:    " << &output_uintptr << std::endl;
	std::cout << "1 void *:     " << ptr1 << std::endl;
	std::cout << "2 void *:     " << ptr2 << std::endl;
	std::cout << "Original:     " << &serial << std::endl;
	std::cout << "Data ptr:     " << deserial << std::endl;
	std::cout << std::endl;

	std::cout << "first name: " << deserial->firstName << std::endl;
	std::cout << "last name: " << deserial->lastName << std::endl;
	std::cout << "age: " << deserial->age << std::endl;
	std::cout << "level: " << deserial->level << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	void	*test = serialize_void(&serial);
	Data	*deserial_void = deserialize_void(test);
	std::cout << "void *:       " << test << std::endl;
	std::cout << "Original:     " << &serial << std::endl;
	std::cout << "Data ptr:     " << deserial_void << std::endl;

	std::cout << "first name: " << deserial_void->firstName << std::endl;
	std::cout << "last name:  " << deserial_void->lastName << std::endl;
	std::cout << "age:        " << deserial_void->age << std::endl;
	std::cout << "level:      " << deserial_void->level << std::endl;
	std::cout << std::endl;

	return (0);
}