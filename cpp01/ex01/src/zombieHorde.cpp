/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:54:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/20 14:06:33 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N > 0){
		Zombie *horde = new (std::nothrow) Zombie[N];
		if (horde == nullptr)
		{
			std::cout << "memory allocation failed" << std::endl;
			return (NULL);
		}
		for (int i = 0; i <= N; i++)
			horde[i].setName(name);
		return (horde);
	}
	std::cout << "Invalid number of Zombies" << std::endl;
	return (NULL);
}
