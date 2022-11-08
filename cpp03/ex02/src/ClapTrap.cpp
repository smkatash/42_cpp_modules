/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:45:05 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 00:05:57 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
	: _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "default ClapTrap is constructed" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->_name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << name << " is constructed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name;
	if (this->_hitPoints == 0)
		std::cout << " is already dead!";
	else if (amount > this->_hitPoints)
	{
		std::cout << " takes " << this->_hitPoints << " damage and dies!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << " takes " << amount << " damage, " << this->_hitPoints << " hit points are remaining!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << this->_name << " is healed by " << amount << " hit points, now has " << this->_hitPoints << " hit points." << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << this->_name;
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= (this->_energyPoints >= 5) ? 5 : this->_energyPoints;
		std::cout << " attacked " << target << std::endl;
	}
	else
		std::cout << " does not have energy points to attack." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& enemy)
	: _name(enemy._name), _hitPoints(enemy._hitPoints), _energyPoints(enemy._energyPoints), _attackDamage(enemy._attackDamage) 
{
	std::cout << "Copy constructor is called on " << enemy._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& enemy)
{
	this->_name = enemy._name;
	this->_hitPoints = enemy._hitPoints;
	this->_energyPoints = enemy._energyPoints;
	this->_attackDamage = enemy._attackDamage;
	return *this;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}
