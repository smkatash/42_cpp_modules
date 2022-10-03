/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:32:43 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/03 18:56:09 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

void print(int i)
{
	std::cout << i << std::endl; 
}

int main(void)
{
    std::vector<int> Vect;
    std::list<int> Lis;

    for (int i = 0; i <= 20; i++)
        Vect.push_back(i);
    
    try
    {
        std::vector<int>::iterator it_vector = easyFind(Vect, 11);
		std::cout << "Vector starting at 11:" << std::endl;
		for_each(it_vector, Vect.end(), print);
    }
    catch(const std::exception& err)
    {
        std::cerr << err.what() << std::endl;
    }
    for (int i = 0; i <= 10; i++)
		Lis.push_back(i);
    try
    {
        std::list<int>::iterator it_list = easyFind(Lis, 10);
		std::cout << "List starting at 10:" << std::endl;
		for_each(it_list, Lis.end(), print);
    }
    catch(const std::exception& err)
    {
        std::cerr << err.what() << std::endl;
    }
    return (0);
}