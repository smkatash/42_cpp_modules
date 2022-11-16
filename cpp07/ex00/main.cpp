/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:40:24 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/16 11:20:52 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 1;
	int b = 9;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "hello";
	std::string d = "world";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << "----------------------------" << std::endl;

	float floatA = 4.2;
	float floatB = 2.4;

	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;
	std::cout << "To swap<float>(floatA, floatB)" << std::endl;
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

	double doubleA = 1234.56;
	double doubleB = -123.01;

	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;
	std::cout << "To swap<double>(doubleA, doubleB)" << std::endl;
	::swap<double>(doubleA, doubleB);
	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "min<double>(doubleA, doubleB): " << ::min<double>(doubleA, doubleB) << std::endl;
	std::cout << "max<double>(doubleA, doubleB): " << ::max<double>(doubleA, doubleB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "min(doubleA, doubleB): " << ::min(doubleA, doubleB) << std::endl;
	std::cout << "max(doubleA, doubleB): " << ::max(doubleA, doubleB) << std::endl;
	return 0;
}
