/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:09:28 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/01 18:04:29 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

// constructor with initialisation
PhoneBook::PhoneBook(){
	this->indexContact = 0;
	this->totalContacts = 0;
	Contact contacts[MAX_CONTACTS];
}

// destruction of Phonebook
PhoneBook::~PhoneBook(){}

// saves input data into newContact object by calling its member function.
void PhoneBook::addContact(){
	if (this->indexContact >= this->MAX_CONTACTS) 
		this->indexContact = 0;

	std::cout << std::endl;
	Contact	newContact;
	if (newContact.getData(this->indexContact + 1))
	{
		this->contacts[this->indexContact] = newContact;
		std::cout << "\nNew contact added\n";
		this->indexContact++;
		if (this->totalContacts < 8)
			this->totalContacts++;
	} else {
		std::cout << "\nFailed to add the contact\n";
	}
	std::cout << std::endl;
	return ;
}

// namespaces are used to organize code into logical groups and to prevent name 
// collisions. checkIsalnum iterates along the string to check if char is 
// alphabetic and returns true, and false otherwise.
namespace {
	bool checkIsalpha(const std::string &str) {
		for (std::string::const_iterator ptr = str.begin(); ptr != str.end(); ptr++) {
			if (std::isalpha(*ptr) == false) 
				return false;
		}
		return true;
	}
}

// handles visual representation of a phonebook.
// checks total amount of Contacts in the Phonebook, if there are no Contacts yet,
// displays the message. Calls diasplayTable function of the object Contact and loops
// over the contacts array to display all exisitng entries.
// Prompts user for index of a contact from the table, if input index is char,
// displays an error. With std::istringstream(input) gets input into i (index).
// If index exists in totalContacts, it calls  diasplayRows function of the object Contact
// with full Contact information
void	PhoneBook::searchContact(){
	if (this->totalContacts == 0) {
		std::cout << "\nPhonebook is empty\n" << std::endl;
		return ;
	}

	std::cout << "\n"
	<< "|--------------------------------------------|\n"
	<< "|  Index | First Name | Last Name | Nickname |\n"
	<< "|--------------------------------------------|\n";
	for (int i = 0; i < this->totalContacts; i++)
		this->contacts[i].displayTable();
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
	this->contacts[i - 1].displayRows();
	std::cout << std::endl;
}