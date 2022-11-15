/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:54:54 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 14:53:56 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// void	check_leaks(void)
// {
// 	system("leaks Array");
// }
// atexit(check_leaks);

int main(void) 
{
	Array<std::string> hello(3);
	hello[0] = "Hello";
	hello[1] = "World";
	hello[2] = "Welcome";

	for (std::size_t i = 0 ; i < hello.size() ; ++i)
		std::cout << hello[i] << " ";
	std::cout << "\n-----" << std::endl;
	
	Array<std::string> bye(hello);
	for (std::size_t i = 0 ; i < bye.size() ; ++i)
	std::cout << bye[i] << " ";
	std::cout << std::endl;
	try {
		bye[3] = "Danger zone";
	} 
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----" << std::endl;
	
	Array<std::string> hallo(5);
	hallo = hello;
	for (std::size_t i = 0 ; i < hallo.size() ; ++i)
		std::cout << hallo[i] << " ";
	std::cout << std::endl;
	try {
		hallo[3] = "Danger zone";
	} 
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----" << std::endl;

	Array<int> integers(5);
	for (std::size_t i = 0 ; i < integers.size() ; ++i)
		integers[i] = i * 2;
	for (std::size_t i = 0 ; i < integers.size() ; ++i)
		std::cout << integers[i] << " ";
	std::cout << std::endl;
	try {
		integers[6] = 42;
	} 
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
