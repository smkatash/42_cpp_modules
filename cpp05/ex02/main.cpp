/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:29:16 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 22:16:08 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	srand(time(NULL));

	Bureaucrat lars("Lars", 5);
	Bureaucrat hans("Hans", 45);
	Bureaucrat ellen("Ellen", 150);

	std::cout << "SUMMARY:" << std::endl;
	std::cout << lars << std::endl;
	std::cout << hans << std::endl;
	std::cout << ellen << std::endl;
	std::cout << std::endl;
	ShrubberyCreationForm	shrubbery("home");
	RobotomyRequestForm		robotomy("Bender");
	PresidentialPardonForm	pardon("Stephen Bannon");
	std::cout << std::endl;
	lars.executeForm(shrubbery);
	hans.executeForm(shrubbery);
	ellen.executeForm(shrubbery);
	std::cout << std::endl;
	lars.signForm(shrubbery);
	hans.signForm(shrubbery);
	ellen.signForm(shrubbery);
	std::cout << std::endl;
	lars.executeForm(shrubbery);
	hans.executeForm(shrubbery);
	ellen.executeForm(shrubbery);
	std::cout << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << std::endl;
	lars.executeForm(pardon);
	hans.executeForm(pardon);
	ellen.executeForm(pardon);
	std::cout << std::endl;
	lars.signForm(pardon);
	hans.signForm(pardon);
	ellen.signForm(pardon);
	std::cout << std::endl;
	lars.executeForm(pardon);
	hans.executeForm(pardon);
	ellen.executeForm(pardon);
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << std::endl;
	lars.executeForm(robotomy);
	hans.executeForm(robotomy);
	ellen.executeForm(robotomy);
	std::cout << std::endl;
	lars.signForm(robotomy);
	hans.signForm(robotomy);
	ellen.signForm(robotomy);
	std::cout << std::endl;
	lars.executeForm(robotomy);
	hans.executeForm(robotomy);
	robotomy.setSigned(false);
	ellen.executeForm(robotomy);
	return 0;
}