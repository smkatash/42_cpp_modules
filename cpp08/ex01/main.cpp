/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:31:20 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 16:02:25 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	std::vector <int> Vector;

	std::cout << "Adding vector:" << std::endl;
	for (int i = 0; i <= 5; i++)
			Vector.push_back(i * 20);

	//Original Span(1000)
	Span sp = Span(0);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(1000);
		sp.addNumber(9);
		sp.addNumber(10);
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
	return 0;
}
