/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:07 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 22:57:15 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << this->_name << " is constructed." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is destroyed." << std::endl;
}

void Zombie::announce(){
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;;
}
