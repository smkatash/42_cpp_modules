/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:29:16 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/30 16:14:05 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/Form.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/Intern.hpp"
#include <iostream>

int main()
{
	srand(time(NULL));

	Bureaucrat lars("Lars", 5);
	Bureaucrat hans("Hans", 45);
	Bureaucrat ellen("Ellen", 150);
	Intern tom;
	Form* shrubbery;
	Form* robotomy;
	Form* pardon;
	Form* testForm;

	try
	{
		shrubbery = tom.makeForm("shrubbery creation", "home");
		robotomy = tom.makeForm("robotomy request", "Bender");
		pardon = tom.makeForm("presidential pardon", "Stephen Bannon");
		testForm = tom.makeForm("test", "test");
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	
	std::cout << std::endl;
	lars.executeForm(*shrubbery);
	hans.executeForm(*shrubbery);
	ellen.executeForm(*shrubbery);
	std::cout << std::endl;
	lars.signForm(*shrubbery);
	hans.signForm(*shrubbery);
	ellen.signForm(*shrubbery);
	std::cout << std::endl;
	lars.executeForm(*shrubbery);
	hans.executeForm(*shrubbery);
	ellen.executeForm(*shrubbery);
	std::cout << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << std::endl;
	lars.executeForm(*pardon);
	hans.executeForm(*pardon);
	ellen.executeForm(*pardon);
	std::cout << std::endl;
	lars.signForm(*pardon);
	hans.signForm(*pardon);
	ellen.signForm(*pardon);
	std::cout << std::endl;
	lars.executeForm(*pardon);
	hans.executeForm(*pardon);
	ellen.executeForm(*pardon);
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << std::endl;
	lars.executeForm(*robotomy);
	hans.executeForm(*robotomy);
	ellen.executeForm(*robotomy);
	std::cout << std::endl;
	lars.signForm(*robotomy);
	hans.signForm(*robotomy);
	ellen.signForm(*robotomy);
	std::cout << std::endl;
	lars.executeForm(*robotomy);
	hans.executeForm(*robotomy);
	ellen.executeForm(*robotomy);
}