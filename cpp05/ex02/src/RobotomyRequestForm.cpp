/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:49:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/30 15:22:00 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default Robotomy", 72, 45) {
    this->_target = "Default";
    std::cout << "Robotomy Request " << *this << " is constructed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robotomy Request " << *this << " is destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("Robotomy Request", 72, 45) {
    this->_target = target;
    std::cout << "Robotomy Request " << *this << " is constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& Parent)
    : Form(Parent.getName(), Parent.getGradeToSign(), Parent.getGradeToExecute()) {
        this->_target = Parent.getTarget();
    std::cout << "Robotomy Request has copied " << Parent.getName() << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& cpyParent) {
    this->_target = cpyParent.getTarget();
    return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {
	return (this->_target);
}

const std::string RobotomyRequestForm::RobotomyException::message() const throw() {
	return ("Robotomy Request Failed");
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() < this->getGradeToExecute())
		throw (Form::GradeTooLowException());	
	int success = std::rand() % 2;
	std::cout << "< intensive drilling noises >\n";
	if (success == 1)
	{
		std::cout << this->_target << " is been 50% robotomized" << std::endl;
	}
	else
		throw (RobotomyRequestForm::RobotomyException());
}