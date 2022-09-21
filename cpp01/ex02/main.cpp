/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:17 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/21 16:10:23 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	word = "HI THIS IS BRAIN";
	std::string	*stringPTR = &word;
	std::string &stringREF = word;

	stringPTR = &word;
	std::cout << "This is the address: " << &word << " of the word: " << word << std::endl;
	std::cout << "This is a pointer:   " << stringPTR << " to the word: " << *stringPTR << std::endl;
	std::cout << "This is a reference: " << &stringREF << " to the word: " << stringREF << std::endl;
	return (0);
}
