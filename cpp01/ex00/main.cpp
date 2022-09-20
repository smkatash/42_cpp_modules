/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:17 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/20 13:48:33 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main(void)
{
	Zombie zombie1("Tiger");
	zombie1.announce();
	randomChump("Leopard");
	Zombie *zombie3 = newZombie("Lion");
	zombie3->announce();
	delete zombie3;
}