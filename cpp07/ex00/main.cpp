/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:40:24 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 23:50:17 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After swap" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "hello";
	std::string d = "world";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
    std::cout << "After swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "----------------------------" << std::endl;

	float floatA = 4.2;
	float floatB = 2.4;

	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;
	std::cout << "swap<float>(floatA, floatB)" << std::endl;
	::swap<float>(floatA, floatB);
	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "min<float>(floatA, floatB): " << ::min<float>(floatA, floatB) << std::endl;
	std::cout << "max<float>(floatA, floatB): " << ::max<float>(floatA, floatB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "min(floatA, floatB): " << ::min(floatA, floatB) << std::endl;
	std::cout << "max(floatA, floatB): " << ::max(floatA, floatB) << std::endl;

	std::cout << "----------------------------" << std::endl;

    double doubleA = 3421.56;
	double doubleB = -242.0;

	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;
	std::cout << "swap<int>(doubleA, doubleB)" << std::endl;
	::swap<double>(doubleA, doubleB);
	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "min<double>(doubleA, doubleB): " << ::min<double>(doubleA, doubleB) << std::endl;
	std::cout << "max<double>(doubleA, doubleB): " << ::max<double>(doubleA, doubleB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "min(doubleA, doubleB): " << ::min(doubleA, doubleB) << std::endl;
	std::cout << "max(doubleA, doubleB): " << ::max(doubleA, doubleB) << std::endl;
}