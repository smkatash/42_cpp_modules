/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:45:05 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 16:42:16 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "default Animal is constructed" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal " << type << " is constructed" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal " << this->_type << " is destroyed" << std::endl;
}

Animal::Animal(const Animal& Parent) : _type(Parent._type) {
	std::cout << "Animal copy constructor called on " << Parent._type << std::endl;
}

Animal& Animal::operator=(const Animal& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "<<Default Animal sound>>" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}
