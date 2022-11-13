/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:27 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 22:25:45 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern is constructed" << std::endl;
};

Intern::~Intern() {
	std::cout << "Intern is destroyed" << std::endl;
};

Form* Intern::makeForm(const std::string& formName, const std::string& target) const {
	
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3 && forms[i] != formName)
		i++;
	Form* tmp = NULL;
	switch (i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			break;
		case 1:
			tmp = new RobotomyRequestForm(target);
			break;
		case 2:
			tmp = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidFormException();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return tmp;
}
