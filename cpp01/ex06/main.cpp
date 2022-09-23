/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:23:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/23 10:40:39 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
	{
		std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};
		int i = 0;
		while (i < 4 && levels[i] != argv[1])
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << levels[0] << " ]" << std::endl;
				harl.complain(levels[0]);
				std::cout << std::endl;
			case 1:
				std::cout << "[ " << levels[1] << " ]" << std::endl;
				harl.complain(levels[1]);
				std::cout << std::endl;
			case 2:
				std::cout << "[ " << levels[2] << " ]" << std::endl;
				harl.complain(levels[2]);
				std::cout << std::endl;
			case 3:
				std::cout << "[ " << levels[3] << " ]" << std::endl;
				harl.complain(levels[3]);
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}