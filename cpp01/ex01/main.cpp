/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:17 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/20 14:17:01 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main(void)
{
	int const N = 5;
	Zombie *horde = zombieHorde(N, "zombie");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}