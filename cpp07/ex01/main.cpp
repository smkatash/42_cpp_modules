/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:54:54 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 11:24:44 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void printToLower(const std::string& str)
{
	for (std::string::const_iterator itr = str.cbegin(); itr != str.cend(); itr++)
		std::cout << (char)tolower(*itr);
	std::cout << " ";
}

void printToUpper(const std::string& str)
{
	for (std::string::const_iterator itr = str.cbegin(); itr != str.cend(); itr++)
		std::cout << (char)toupper(*itr);
	std::cout << " ";
}

void intIncrement(const int& num)
{
	std::cout << (num + 5) << " ";
}

int main(void)
{
	std::string arr[] = {"Hello", "World", "42school", "here"};

	std::cout << "Input: " << std::endl;
	::iter(arr, 4, putString<std::string>);
	std::cout << "\nTo Upper: " << std::endl;
	::iter(arr, 4, printToUpper);
	std::cout << "\nTo Lower: " << std::endl;
	::iter(arr, 4, printToLower);

	int intarr[] = {1, 2, 3};

	std::cout << "\nIntegers: " << std::endl;
	::iter(intarr, 3, putString<int>);
	std::cout << "\nIncrement by 5: " << std::endl;
	::iter(intarr, 3, intIncrement);

	float floats[] = {4.22, 4.22, 7.22};

	std::cout << "\nFloats: " << std::endl;
	::iter(floats, 3, putString<float>);
	return 0;
}