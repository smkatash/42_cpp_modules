/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:32:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 21:04:16 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Serialize.hpp"
#include <iomanip>
#include <iostream>

int main()
{
	Data serial;

	serial.firstName = "Bob";
	serial.lastName = "Marley";
	serial.age = 26;
	serial.level = 4.01;

	std::cout << "first name: " << serial.firstName << std::endl;
	std::cout << "last name: " << serial.lastName << std::endl;
	std::cout << "age: " << serial.age << std::endl;
	std::cout << "level: " << serial.level << std::endl;
	std::cout << std::endl;
	
	uintptr_t output_uintptr = serialize(&serial);
	Data* deserial = deserialize(output_uintptr);

	std::cout << "first name: " << deserial->firstName << std::endl;
	std::cout << "last name: " << deserial->lastName << std::endl;
	std::cout << "age: " << deserial->age << std::endl;
	std::cout << "level: " << deserial->level << std::endl;
	return (0);
}