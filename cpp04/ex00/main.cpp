/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 20:42:29 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* defaultAnimal = new Animal();
	const Animal* levie = new Cat("Levie");
	const Animal* retriever = new Dog("Golden Retriever");
	const WrongAnimal* defaultWrongAnimal = new WrongAnimal();
	const WrongAnimal* bunny = new WrongCat("Black Bunny");

	std::cout << std::endl;
	std::cout << defaultAnimal->getType() << ": ";
	defaultAnimal->makeSound();
	std::cout << levie->getType() << ": ";
	levie->makeSound();
	std::cout << retriever->getType() << ": ";
	retriever->makeSound();
	std::cout << defaultWrongAnimal->getType() << ": ";
	defaultWrongAnimal->makeSound();
	std::cout << bunny->getType() << ": ";
	bunny->makeSound();
	std::cout << std::endl;

	delete defaultAnimal;
	delete levie;
	delete retriever;
	delete defaultWrongAnimal;
	delete bunny;
	return (0);
}
