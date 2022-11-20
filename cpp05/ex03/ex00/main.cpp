/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:29:16 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 21:38:37 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "Grade -41:" << std::endl;
	try
	{
		Bureaucrat tom("Tom", -42);
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Grade 233:" << std::endl;
	try
	{
		Bureaucrat tom("Tom", 233);
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat bob("Bob", 1);
	try
	{
		bob.decrementGrade();
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
	std::cout << bob << std::endl;
	try
	{
		bob.incrementGrade();
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cout << exceptionGrade.message() << std::endl;
	}
	std::cout << bob << std::endl;
	std::cout << "Decrement grade by 1" << std::endl;
	try
	{
		bob.decrementGrade();
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
    std::cout << bob << std::endl;
	std::cout << std::endl;
	bob.setGrade(150);
	try
	{
		bob.incrementGrade();
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
	std::cout << bob << std::endl;
	try
	{
		bob.decrementGrade();
	}
	catch (Bureaucrat::Exception &exceptionGrade)
	{
		std::cerr << exceptionGrade.message() << std::endl;
	}
	std::cout << bob << std::endl;
	std::cout << std::endl;
	return 0;
}