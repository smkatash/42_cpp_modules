/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:00:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/12 22:06:42 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default President Pardon", 25, 5)
{
	this->_target = "Default";
	std::cout << "President Pardon " << *this << " is constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("President Pardon", 25, 5)
{
	this->_target = target;
	std::cout << "Presidential Pardon " << *this << " is constructed" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon " << *this << " has been destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & Parent) : Form(Parent.getName(), Parent.getGradeToSign(), Parent.getGradeToExecute())
{
	this->_target = Parent.getTarget();
	std::cout << "Presidential Pardon is copied from " << Parent.getName() << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & cpyParent)
{
	this->_target = cpyParent.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (Form::GradeTooHighException());
	else
		std::cout << this->_target << " was pardonned by Zafod Beeblebrox\n";
}
