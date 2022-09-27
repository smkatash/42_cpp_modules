/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:29:40 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 20:59:36 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain()){
	std::cout << "AAnimal is constructed" << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type), _brain(new Brain()){
	std::cout << "Dog " << type << " constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog " << this->_type << " is destroyed"<< std::endl;
}

Dog::Dog(const Dog& Parent) : AAnimal(Parent) {
	this->_brain = new Brain(*Parent._brain);
	std::cout << "Dog copy constructor called on " << Parent._type << std::endl;
}

Dog& Dog::operator=(const Dog& cpyParent) {
	this->_brain = new Brain(*cpyParent._brain);
	this->_type = cpyParent._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "<<Bark - Bark>>" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}