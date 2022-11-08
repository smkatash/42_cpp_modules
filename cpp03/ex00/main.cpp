/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/08 23:49:02 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap harry("Harry");
	ClapTrap hermione("Hermione");
	ClapTrap ron("Ron");
	ClapTrap voldemort = harry;

	voldemort.setName("Voldemort");
	harry.attack("Voldemort");
	voldemort.takeDamage(2);
	voldemort.attack("Harry");
	harry.takeDamage(5);
	harry.attack("Voldemort");
	voldemort.takeDamage(5);
	hermione.attack("Draco");
	hermione.takeDamage(9);
	hermione.takeDamage(10);
	ron.beRepaired(10);
	ron.attack("Malfoy");
	ron.takeDamage(19);
	return 0;
}
