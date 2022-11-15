/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:32:43 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 15:41:10 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << " "; 
}

int main(void)
{
	std::vector<int> Vect;
	std::list<int> List;

	std::cout << "Vector Test:" << std::endl;
	for (int i = 0; i <= 20; i++)
		Vect.push_back(i);
	
	try
	{
		std::vector<int>::iterator it_vector = easyFind(Vect, 11);
		std::cout << "Vector starts at 11:" << std::endl;
		for_each(it_vector, Vect.end(), print);
	}
	catch(const std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\nList Test:" << std::endl;
	for (int i = 0; i <= 10; i++)
		List.push_back(i);
	try
	{
		std::list<int>::iterator it_list = easyFind(List, 10);
		std::cout << "List starts 10:" << std::endl;
		for_each(it_list, List.end(), print);
	}
	catch(const std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\nDanger Zone:" << std::endl;
	try
	{
		std::list<int>::iterator it_list = easyFind(List, 11);
		for_each(it_list, List.end(), print);
	}
	catch(const std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}
	return 0;
}
