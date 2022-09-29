/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:29:16 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/29 10:48:50 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/Form.hpp"

int	main(void)
{
	Bureaucrat	hans("Hans", 5);
	Bureaucrat	johannes("Johannes", 150);
	Bureaucrat& hans_param = hans;
	Bureaucrat& johannes_param = johannes;
	Form		A("A42", 4, 6);
	Form		B("B42", 130, 130);

	try
	{
		Form	C("C46", 489, 1435);
	}
	catch (Form::Exception &err)
	{
		std::cerr << "Form C-"<< err.message() << std::endl; //the grade is too high
	}
	try
	{
		Form	C("D42", -583, -800);
	}
	catch (Form::Exception &err)
	{
		std::cerr << "Form C-"<< err.message() << std::endl; //the grade is too low
	}
	std::cout << std::endl;
	std::cout << "Sign Forms: " << std::endl << std::endl;
	
	std::cout << "Sign OK:" << std::endl;
	hans_param.signForm(A);
	std::cout << "Summary on Form A:" << std::endl;
	std::cout << A << std::endl;
	std::cout << std::endl;
	A.setSigned(false);
	std::cout << std::endl;
	
	std::cout << "Sign KO:" << std::endl;
	hans.signForm(B);
	std::cout << "Summary on Form B:" << std::endl;
	std::cout << B << std::endl;
	std::cout << std::endl;
	
	std::cout << "Sign OK:" << std::endl;
	johannes_param.signForm(A);
	std::cout << "Summary on Form A:" << std::endl;
	std::cout << A << std::endl;
	A.setSigned(false);
	std::cout << std::endl;
	
	std::cout << "Sign OK:" << std::endl;
	johannes.signForm(B);
	std::cout << "Summary on Form B:" << std::endl;
	std::cout << B << std::endl;
	return (0);
}