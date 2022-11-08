/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:08:26 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 00:13:38 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("default ClapTrap name"), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_ClapTrap"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& Parent)
	: ClapTrap(Parent), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called on " << Parent._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cpyParent)
{
	ClapTrap::operator=(cpyParent);
	ScavTrap();
	FragTrap();
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}