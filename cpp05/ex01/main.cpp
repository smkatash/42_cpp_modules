/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:29:16 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 21:57:07 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	hans("Hans", 5);
	Bureaucrat	johannes("Johannes", 150);
	Bureaucrat &hans_param = hans;
	Bureaucrat &johannes_param = johannes;
	Form		A("A42", 4, 6);
	Form		B("B42", 130, 130);

	try
	{
		Form	C("C46", 489, 1435);
	}
	catch (Form::Exception &err)
	{
		std::cerr << "Form C-"<< err.message() << std::endl; //the grade is too low
	}
	try
	{
		Form	C("D42", -583, -800);
	}
	catch (Form::Exception &err)
	{
		std::cerr << "Form D-"<< err.message() << std::endl; //the grade is too high
	}
	std::cout << std::endl;
	std::cout << "Sign Forms: " << std::endl << std::endl;
	
	std::cout << "1" << std::endl;
	hans_param.signForm(A);
	std::cout << "Summary on Form A:" << std::endl;
	std::cout << A << std::endl;
	std::cout << std::endl;
	A.setSigned(false);
	std::cout << std::endl;
	
	std::cout << "2" << std::endl;
	hans.signForm(B);
	std::cout << "Summary on Form B:" << std::endl;
	std::cout << B << std::endl;
	B.setSigned(false);
	std::cout << std::endl;
	
	std::cout << "3" << std::endl;
	johannes_param.signForm(A);
	std::cout << "Summary on Form A:" << std::endl;
	std::cout << A << std::endl;
	A.setSigned(false);
	std::cout << std::endl;
	
	std::cout << "4" << std::endl;
	johannes.signForm(B);
	std::cout << "Summary on Form B:" << std::endl;
	std::cout << B << std::endl;
	B.setSigned(false);
	return (0);
}