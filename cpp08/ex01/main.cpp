/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:31:20 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/17 17:12:40 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	std::vector <int> Vector;

	std::cout << "Adding vector:" << std::endl;
	for (int i = 0; i <= 5; i++)
		Vector.push_back(i * 20);
	for(unsigned long i = 0; i < Vector.size(); i++) {
		std::cout << Vector.at(i) << ' '; 
	}
	std::cout << std::endl;

	//Original Span(10000) / 20 / 10
	Span sp = Span(0);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(1000);
		sp.addNumber(9);
		sp.addNumber(10);
		sp.addNumber(11000);
		sp.addNumber(1100);
		sp.addNumber(1120);
		sp.addNumber(1130);
		sp.addNumber(11);
		sp.addNumber(std::begin(Vector), std::end(Vector));
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
	std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
	std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
