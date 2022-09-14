/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:09:28 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/14 17:57:13 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->indexContact = 0;
	this->totalContacts = 0;
	for (int i = 0; i < MAX_CONTACTS; i++) {
		this->contacts[i] = new Contact;
	}
}

PhoneBook::~PhoneBook(){
	for (int i = 0; i < MAX_CONTACTS; i++) {
		delete this->contacts[i];
	}
}

void PhoneBook::addContact(){
	if (this->indexContact >= this->MAX_CONTACTS) 
		this->indexContact = 0;

	std::cout << std::endl;
	Contact *newContact = new Contact;
	if (newContact->getData(this->indexContact + 1) == 0)
	{
		delete this->contacts[this->indexContact];
		this->contacts[this->indexContact] = newContact;
		std::cout << "\nNew contact added\n";
		this->indexContact++;
		if (this->totalContacts < 8)
			this->totalContacts++;
	} else {
		delete newContact;
	}
	std::cout << std::endl;
	return ;
}

namespace {
	bool checkIsalpha(const std::string &str) {
		for (std::string::const_iterator ptr = str.begin(); ptr != str.end(); ptr++) {
			if (std::isalpha(*ptr)) 
				return true;
		}
		return false;
	}
}
void	PhoneBook::searchContact(){
	if (this->totalContacts == 0) {
		std::cout << "\nPhonebook is empty\n" << std::endl;
		return ;
	}

	std::cout << "\n"
	<< "|-------------------------------------------|\n"
	<< "| Index | First Name | Last Name | Nickname |\n"
	<< "|-------------------------------------------|\n";
	for (int i = 0; i < this->totalContacts; i++)
		this->contacts[i]->displayTable();
	std::cout << "|-------------------------------------------|" << std::endl;

	int i;
	std::cout << "\nIndex of a contact to display (\"EXIT\" to stop)\n";
	do {
		std::string input;
		std::cout << "Index: " << std::flush;
		std::getline(std::cin, input);
		if (input == "EXIT") {
			std::cout << std::endl;
			return;
		} else if (checkIsalpha(input)) {
			std::cout << "\nInvalid input type" << std::endl;
		} else {
			std::istringstream(input) >> i;
			if (i <= 0 || i > this->totalContacts) {
				std::cout << "\nInvalid index" << std::endl;
			} else {
				break;
			}
		}
	} while (true);

	std::cout << std::endl;
	this->contacts[i - 1]->displayRows();
	std::cout << std::endl;
}
