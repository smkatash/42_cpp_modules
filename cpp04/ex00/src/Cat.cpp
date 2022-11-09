/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:48:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:35:49 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Animal Cat is constructed" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat " << this->_type << " is destroyed"<< std::endl;
}

Cat::Cat(const Cat& Parent) : Animal(Parent) {
	std::cout << "Cat copy constructor called on " << Parent._type << std::endl;
}

Cat& Cat::operator=(const Cat& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "<<Meow - Meow>>" << std::endl;
}