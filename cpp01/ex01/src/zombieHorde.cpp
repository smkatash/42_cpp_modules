/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:54:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:04:41 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//std::nothrow ignores bad_alloc Exception, returns nullptr
Zombie* zombieHorde(int N, std::string name) {
	if (N > 0) {
		Zombie *horde = new (std::nothrow) Zombie[N];
		if (horde == nullptr)
		{
			std::cout << "Memory allocation failed" << std::endl;
			return (NULL);
		}
		for (int i = 0; i < N; i++)
			horde[i].setName(name);
		return (horde);
	}
	std::cout << "Invalid number of Zombies" << std::endl;
	return (NULL);
}
