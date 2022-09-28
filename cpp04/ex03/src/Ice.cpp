/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:57:30 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 15:52:55 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {}

Ice::Ice(const Ice& Parent) : AMateria(Parent) {
}

Ice& Ice::operator=(const Ice& cpyParent) {
	this->AMateria::operator=(cpyParent);
	return *this;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}