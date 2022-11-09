/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:29:40 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:35:53 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Animal is constructed" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "Dog " << type << " constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog " << this->_type << " is destroyed"<< std::endl;
}

Dog::Dog(const Dog& Parent) : Animal(Parent) {
	std::cout << "Dog copy constructor called on " << Parent._type << std::endl;
}

Dog& Dog::operator=(const Dog& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "<<Bark - Bark>>" << std::endl;
}