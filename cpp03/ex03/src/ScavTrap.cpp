/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 00:54:05 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 00:58:01 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& Parent)
	: ClapTrap(Parent) {
	std::cout << "ScavTrap copy constructor called on " << Parent._name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpyParent)
{
	ClapTrap::operator=(cpyParent);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name;
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 5;
		std::cout << " attacked " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << " has too little energy points to attack." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode!" << std::endl;
}