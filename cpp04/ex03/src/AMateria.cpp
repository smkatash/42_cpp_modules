/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:11:30 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:23:38 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& Parent) : _type(Parent._type) {
}

AMateria& AMateria::operator=(const AMateria& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}