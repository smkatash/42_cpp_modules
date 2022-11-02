/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:07:27 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:23:12 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name), _weaponType(weapon) {}

HumanA::~HumanA() {
	std::cout << this->_name << " has been killed." << std::endl;
}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weaponType.getType() << std::endl;
}
