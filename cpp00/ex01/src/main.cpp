/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:45:38 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/01 18:07:23 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <csignal>
#include <climits>

int main() {
	std::string line;
	PhoneBook phoneBook;

	std::cout << "Please enter: " << std::endl;
	std::cout << "ADD - to add a new contact" << std::endl;
	std::cout << "SEARCH - to search a contact" << std::endl;
	std::cout << "EXIT - to exit the PhoneBook" << std::endl;
	// keep reading into a line from user input
	do {
		if (line == "ADD") {
			phoneBook.addContact();
		} else if (line == "SEARCH") {
			phoneBook.searchContact();
		} else if (line == "EXIT") {
			std::cout << "exit" << std::endl;
			break;
		} else if (std::cin.eof()) {
			break;
		}
		//clear error flags which are set when std::cin fails to interpret the input.
		std::cin.clear();
	} while (std::cout << "Phonebook $> ", std::getline(std::cin, line));
	std::cin.clear();
	return 0;
}
