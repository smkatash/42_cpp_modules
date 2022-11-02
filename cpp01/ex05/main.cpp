/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:23:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:55:23 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	std::cout << "[DEBUG] " << std::endl;
	harl.complain("DEBUG");
	std::cout << "[INFO] " << std::endl;
	harl.complain("INFO");
	std::cout << "[WARNING] " << std::endl;
	harl.complain("WARNING");
	std::cout << "[ERROR] " << std::endl;
	harl.complain("ERROR");
	return 0;
}
