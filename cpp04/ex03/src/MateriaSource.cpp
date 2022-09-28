/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:44:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 15:53:15 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& Parent) {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (Parent._materia[i]) ? Parent._materia[i]->clone() : NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cpyParent) {
	if (this != &cpyParent) {
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_materia[i] = (cpyParent._materia[i]) ? cpyParent._materia[i]->clone() : NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* type) {
	if (type) {
		for (int i = 0; i < 4; i++) {
			if (!this->_materia[i]) {
				this->_materia[i] = type;
				break; 
			}
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}