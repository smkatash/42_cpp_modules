/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/08 23:49:25 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap harry("Harry");
	ClapTrap hermione("Hermione");
	ClapTrap ron("Ron");
	ScavTrap hagrid("Hagrid");

	harry.attack("Voldemort");
	harry.attack("Malfoy");
	harry.attack("Draco");
	harry.takeDamage(5);
	hermione.takeDamage(9);
	hermione.takeDamage(10);
	ron.beRepaired(10);
	ron.takeDamage(19);
	hagrid.attack("Voldemort");
	hagrid.takeDamage(99);
	hagrid.beRepaired(50);
	hagrid.guardGate();
}
