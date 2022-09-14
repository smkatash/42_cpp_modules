/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:25:46 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/14 17:59:01 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

namespace {
	bool checkIsalnum(const std::string &str){
		for (std::string::const_iterator ptr = str.begin(); ptr != str.end(); ptr++){
			if (std::isalnum(*ptr))
			return true;
		}
		return false;
	}
}

int	Contact::getData(int index){
	int	i;

	this->index = index;
	i = 0;

	do {
		std::cout << "First Name: ";
		std::getline(std::cin, this->fieldInfo[i]);
		if (std::cin.eof()) { std::cin.clear(); return 1;}
	}	while (!checkIsalnum(this->fieldInfo[i]) || this->fieldInfo[i].empty());

	std::cout << "Last name: ";
	std::getline(std::cin, this->fieldInfo[++i]);
	if (std::cin.eof()) { std::cin.clear(); return 1;}

	std::cout << "Nickname: ";
	std::getline(std::cin, this->fieldInfo[++i]);
	if (std::cin.eof()) { std::cin.clear(); return 1;}

	std::cout << "Phone number: ";
	std::getline(std::cin, this->fieldInfo[++i]);
	if (std::cin.eof()) { std::cin.clear(); return 1;}
	
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->fieldInfo[++i]);
	if (std::cin.eof()) { std::cin.clear(); return 1;}

	if (this->fieldInfo[0].length() < 1){
		std::cout << "\n Name is required\n"; return 1;
	}
	return 0;
}

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
