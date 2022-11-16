/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:19:28 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/13 18:14:11 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"
#include <iostream>

Base* generate() {
	std::cout << "generated: ";
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A";
		return new A();
	case 1:
		std::cout << "B";
		return new B();
	case 2:
		std::cout << "C";
		return new C();
	default:
		return NULL;
	}
}

void identify(Base* p) {
	std::cout << "Identify by pointer: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "bad cast" << std::endl;

}

void identify(Base& p) {
	try {
		std::cout << "Identify by reference: ";
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
		else
			std::cerr << "bad reference" << std::endl;
	} catch (const std::exception& err) {
		std::cerr << err.what() << std::endl;
	}
}

int main(void)
{
	srand(time(NULL));
	Base	*test = NULL;
	identify(test);
	Base	test1;
	identify(test1);
	Base	*ptr = generate();
	std::cout << " (pointer)" << std::endl;
	Base	*tmp = generate();
	Base	&ref = *tmp;
	std::cout << " (reference)" << std::endl;
	identify(ptr);
	identify(ptr);
	identify(ref);
	identify(ref);

	delete ptr;
	delete tmp;
	return (0);
}