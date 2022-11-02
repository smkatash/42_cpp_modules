/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:07 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:40:25 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name) {
	this->_name = name;
	_got_name = true;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is destroyed." << std::endl;
}

void Zombie::announce() {
	if (_got_name == true)
		std::cout << this->_name << " : Woop woop!"<< std::endl;;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	_got_name = true;
}
