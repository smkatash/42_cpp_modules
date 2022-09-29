/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:22:13 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/29 10:29:38 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _name("default Form"), _signed(0), _gradeToSign(50), _gradeToExecute(50) {
    std::cout << "default Form is constructed" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
    _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
    if (gradeToSign > 150 || gradeToExecute > 150)
		throw (Form::GradeTooHighException());
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw (Form::GradeTooLowException());
	else
	{
        std::cout << "Form " << name << " is constructed:";
        std::cout << " grade to sign - " << gradeToSign << ", grade to execute - " << gradeToExecute << std::endl;
	}
}

Form::Form(const Form& Parent) :
    _name(Parent._name), _signed(Parent._signed), _gradeToSign(Parent._gradeToSign), _gradeToExecute(Parent._gradeToExecute) {
    std::cout << "A copy of " << Parent._name << " is created" << std::endl;
}

Form::~Form() {
    std::cout << *this << " is destroyed" << std::endl;
}

Form& Form::operator=(const Form& cpyParent) {
    this->_signed = cpyParent.getSigned();
	return (*this);
}

const std::string Form::getName() const {
    return (this->_name);
}

int Form::getGradeToSign( void ) const {
    return (this->_gradeToSign);
}

int Form::getGradeToExecute( void ) const {
    return (this->_gradeToExecute);
}

bool Form::getSigned( void ) const {
    return (this->_signed);
}

void	Form::setSigned(const bool state)
{
	std::string s = "signed";
	std::string ns = "not signed";
	if (state == 0)
		std::cout << *this << " value was set to " << ns << std::endl;
	else
		std::cout << *this << " value was set to " << s << std::endl;
	this->_signed = state;
}

const std::string Form::Exception::message() const throw()
{
	return ("FormException");
}

const std::string Form::GradeTooLowException::message() const throw()
{
	return ("FormException: grade is too low!");
}

const std::string Form::GradeTooHighException::message() const throw()
{
	return ("FormException: grade is too high!");
};

void	Form::beSigned(Bureaucrat & param)
{
	int	grade = param.getGrade();

	if (grade < _gradeToSign)
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	_signed = true;
	std::cout << *this << " was signed by the bureaucrat " << param.getName() << " with a grade " << param.getGrade() << std::endl;
}

std::ostream& operator<<(std::ostream& o, Form const & crnt)
{
	o << "Form " << crnt.getName() << " with grade to sign " << crnt.getGradeToSign() << " and a grade to execute "
		<< crnt.getGradeToExecute() << " with signed equal to " << crnt.getSigned();
	return (o);
}