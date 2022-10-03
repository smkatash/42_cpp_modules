/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:36:21 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/03 19:53:27 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/MutantStack.hpp"
#include <iostream>

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator it2 = mstack.end();

	++it1;
	--it1;
	while (it1 != it2)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int> s(mstack);

	std::cout << "Reverse iterator:" << std::endl;

	MutantStack<std::string> reverse;

	reverse.push("Hello");
	reverse.push("world");
	reverse.push("this");
	reverse.push("is");
	reverse.push("42");

	MutantStack<std::string>::reverse_iterator rev_itr = reverse.rbegin();
	for (; rev_itr != reverse.rend(); rev_itr++)
		std::cout << *rev_itr << std::endl;

	std::cout << "Copy constructor:" << std::endl;

	MutantStack<int> copy(mstack);

	copy.pop();
	copy.pop();
	copy.pop();
	copy.push(12);
	copy.push(22);
	copy.push(32);

	MutantStack<int>::iterator copy_itr = copy.begin();
	for (; copy_itr != copy.end(); copy_itr++)
		std::cout << *copy_itr << std::endl;

	std::cout << "Assignment operator:" << std::endl;

	MutantStack<int> mstack_copy = copy;
	mstack_copy.pop();
	mstack_copy.pop();
	mstack_copy.push(56);
	mstack_copy.push(66);
	mstack_copy.push(76);

	MutantStack<int>::iterator mstack_cpy_itr = mstack_copy.begin();
	for (; mstack_cpy_itr != mstack_copy.end(); mstack_cpy_itr++)
		std::cout << *mstack_cpy_itr << std::endl;
	return 0;
}