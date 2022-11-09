/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:45:05 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:04:05 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "default AAnimal is constructed" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal " << type << " is constructed" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal " << this->_type << " is destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal& Parent) : _type(Parent._type) {
	std::cout << "AAnimal copy constructor called on " << Parent._type << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

std::string AAnimal::getType() const {
	return this->_type;
}

