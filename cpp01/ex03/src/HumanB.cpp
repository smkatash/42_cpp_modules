/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:14:00 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/21 21:17:56 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB() {
	std::cout << this->_name << " has been killed." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weaponType = &weapon;
}

void HumanB::attack() const {
	std::cout << this->_name << " attacks with his ";
	if (!this->_weaponType) {
		std::cout << this->_weaponType->getType();
	}
	else
		std::cout << "fists.";
	std::cout << std::endl;
}
