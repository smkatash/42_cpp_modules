/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:25:46 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/15 18:19:09 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

// constr. and destr.
Contact::Contact() {}
Contact::~Contact() {}

// namespaces are used to organize code into logical groups and to prevent name 
// collisions. checkIsalnum iterates along the string to check if char is alphanumeric and returns true, false otherwise.
namespace {
	bool checkIsalnum(const std::string &str){
		for (std::string::const_iterator ptr = str.begin(); ptr != str.end(); ptr++){
			if (std::isalnum(*ptr))
			return true;
		}
		return false;
	}
}
// namespaces are used to organize code into logical groups and to prevent name 
// collisions. checkIsdigit iterates along the string to check if char is numeric and returns true, false otherwise.
namespace {
	bool checkIsdigit(const std::string &str){
		for (std::string::const_iterator ptr = str.begin(); ptr != str.end(); ptr++){
			if (std::isdigit(*ptr))
			return true;
		}
		return false;
	}
}

// saves input data according to the title into the fieldInfo by getting line by line
// from user input. std::cin.eof() returns true if an attempt has been made to read 
// past the end of file. and std::cin.clear() clears the error flag on cin and returns 0 as a failure.
// If input has been saved correctly into fieldInfo, 1 is returned for successful.
// Input is checked with checkIsalnum if it is an alphanumeric value and CheckIsdigit,
// reprompts user in case of a wrong input type.
int	Contact::getData(int index){
	int	i;

	this->index = index;
	i = 0;

	do {
		std::cout << "First Name: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 0;}
	}	while (!checkIsalnum(this->fieldInfo[i]) || this->fieldInfo[i].empty());
	i++;
	do {
		std::cout << "Last name: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 0;}
	}	while (!checkIsalnum(this->fieldInfo[i]) || this->fieldInfo[i].empty());
	i++;
	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 0;}
	}	while (!checkIsalnum(this->fieldInfo[i]) || this->fieldInfo[i].empty());
	i++;
	do {
		std::cout << "Phone number: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 0;}
	}	while (!checkIsdigit(this->fieldInfo[i]) || this->fieldInfo[i].empty());
	i++;
	do {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 0;}
	}	while (!checkIsalnum(this->fieldInfo[i]) || this->fieldInfo[i].empty());

	if (this->fieldInfo[0].length() < 1){
		std::cout << "\n Name is required\n"; return 0;
	}
	return 1;
}

// loops over fieldInfo string array and outputs it's strings with a newline
// row by row
void	Contact::displayRows(){
	int	i;

	std::cout << "Phone Book: Contact information of #" << this->index << "\n";
	i = -1;
	std::cout << "First Name:     " << this->fieldInfo[++i] << "\n";
	std::cout << "Last Name:      " << this->fieldInfo[++i] << "\n";
	std::cout << "Nickname:       " << this->fieldInfo[++i] << "\n";
	std::cout << "Phone number:   " << this->fieldInfo[++i] << "\n";
	std::cout << "Darkest secret: " << this->fieldInfo[++i] << std::endl;
}


// displays Contact details in a Table format, according to fieldInfo array of strings
// by placing '|' between outputs. 
// Verifies if length of a string is more than 10 it replaces rest with '.', else
// outputs a full string.
// - std::setw() from <iomanip> sets the field width to be used on output operations
// - std::right is a stream manipulator to let the minus and the digits of a negative 
// number both be put at the right of the padding width.
void	Contact::displayTable(){
	std::cout << "|" << std::right << std::setw(10) << this->index;

	for (int i = 0; i < 3; i++) {
		std::cout << "|";
		if (this->fieldInfo[i].length() > 10) {
			std::cout << this->fieldInfo[i].substr(0, 9) << ".";
		} else {
			std::cout << std::right << std::setw(10) << this->fieldInfo[i];
		}
	}
	std::cout << "|" << std::endl;
}
