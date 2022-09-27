/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:58:21 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 16:42:28 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat is constructed" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat " << type << " is constructed" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat " << this->_type << " is destroyed"<< std::endl;
}

WrongCat::WrongCat(const WrongCat& Parent) : WrongAnimal(Parent) {
	std::cout << "WrongCat copy constructor called on " << Parent._type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cpyParent) {
	this->_type = cpyParent._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "<<Meow - Meow>>" << std::endl;
}