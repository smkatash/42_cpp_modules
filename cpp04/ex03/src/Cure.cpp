/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:12:27 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 15:50:56 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure() {}

Cure::Cure(const Cure& Parent) : AMateria(Parent) {}

Cure& Cure::operator=(const Cure& cpyParent) {
	this->AMateria::operator=(cpyParent);
	return *this;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}