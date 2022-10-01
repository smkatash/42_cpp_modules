/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:32:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 19:49:01 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Converter.hpp"
#include <iomanip>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2) {
		try {
			Converter scalar(argv[1]);
			std::cout << scalar;
		} catch (const std::exception& err) {
			std::cerr << err.what() << std::endl;
		}
	}
	else
		std::cerr << "./convert <value>" << std::endl;
	return (0);
}