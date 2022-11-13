/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:08:46 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 22:06:49 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default Shrub", 145, 137) {
	this->_target = "Default";
	std::cout << "Shrubbery Creation " << *this << " is constructed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation " << *this << " is destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrub", 145, 137) {
	this->_target = target;
	std::cout << "Shrubbery Creation " << *this << " is constructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& Parent)
	: Form(Parent.getName(), Parent.getGradeToSign(), Parent.getGradeToExecute()) {
		this->_target = Parent.getTarget();
	std::cout << "Shrubbery Creation has copied " << Parent.getName() << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& cpyParent) {
	this->_target = cpyParent.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
		std::string	tree = 
	"     ccee88oo          \n"
	"  C8O8O8Q8PoOb o8oo    \n"
	" dOB69QO8PdUOpugoO9bD  \n"
	"CgggbU8OU qOp qOdoUOdcb\n"
	"   6OuU  /p u gcoUodpP \n"
	"      \\\\//  /douUP   \n"
	"        \\\\////       \n"
	"         |||/\\        \n"
	"         |||\\/        \n"
	"         |||||         \n"
	"  .....\\//||||\\....  \n";

		if (this->getSigned() == false)
			throw (Form::UnsignedFormException());
		else if (executor.getGrade() > this->getGradeToExecute())
			throw (Form::GradeTooHighException());
		else
		{
			std::ofstream	outfile(this->_target);
			if (!outfile.is_open())
			{
				std::cerr << "Can not open the output file" << std::endl;
				return ;
			}
			outfile << tree;
		}
}
