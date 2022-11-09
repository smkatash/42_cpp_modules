/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:19:24 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:23:34 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string& name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}

Character::Character(const Character& Parent) : _name(Parent._name) {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = (Parent._materia[i]) ? Parent._materia[i]->clone() : NULL;
	}
}

Character& Character::operator=(const Character& cpyParent) {
	if (this != &cpyParent) {
		this->~Character();
		this->_name = cpyParent._name;
		for (int i = 0; i < 4; i++)
			this->_materia[i] = (cpyParent._materia[i]) ? cpyParent._materia[i]->clone() : NULL;
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}


void Character::equip(AMateria* m) {
	if (m) {
		for (int i = 0; i < 4; i++) {
			if (!this->_materia[i]) {
				this->_materia[i] = m;
				break;
			}
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_materia[idx])
		this->_materia[idx]->use(target);
}