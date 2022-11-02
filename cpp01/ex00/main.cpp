/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:17 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 22:59:12 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombies on the stack vs heap
int main(void)
{
	Zombie zombie1("Tiger");
	Zombie *zombie3;

	zombie1.announce();
	randomChump("Leopard");
	zombie3 = newZombie("Lion");
	zombie3->announce();
	delete zombie3;
}
