/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 07:37:29 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/29 10:46:03 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default Bureaucrat"), _grade(150) {
    std::cout << "A default Bureaucrat has beed constructed" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->_grade = grade;
		std::cout << "A Bureaucrat " << _name << " with a grade " << _grade << " has beed constructed" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& Parent): _name(Parent._name), _grade(Parent._grade){
    std::cout << "A Bureaucrat " << _name << " with a grade " << _grade << " has beed constructed" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "A Bureaucrat " << this->_name << " is destroyed" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& cpyParent) {
    this->_grade = cpyParent._grade;
    return *this;
}

const std::string Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void    Bureaucrat::incrementGrade( void ) {
    std::cout << "Incrementing a grade of " << this->_name << " by 1" << std::endl;
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade++;
}

void    Bureaucrat::decrementGrade( void ) {
    std::cout << "Decrementing a grade of " << this->_name << " by 1" << std::endl;
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade--;
}

void    Bureaucrat::setGrade(const int grade)
{
	this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << "'s grade was set to " << grade << std::endl;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & crnt)
{
	o << "Bureaucrat " << crnt.getName() << " has a grade " << crnt.getGrade();
	return (o);
}

const std::string Bureaucrat::Exception::message() const throw()
{
	return ("BureaucratException");
}

const std::string Bureaucrat::GradeTooLowException::message() const throw()
{
	return ("BureaucratException: Grade is less than 1!");
}

const std::string Bureaucrat::GradeTooHighException::message() const throw()
{
	return ("BureaucratException: Grade is bigger than 150!");
};

void Bureaucrat::signForm(Form& paper) {
	try
	{
		paper.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " signed " << paper << std::endl;
	}
	catch (Form::Exception &err)
	{
		std::cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " cannot sign " << paper << " due to " << err.message() << std::endl;
	}
}