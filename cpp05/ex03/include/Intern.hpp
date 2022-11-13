/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:51:02 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 14:57:23 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Form;

class Intern {
	public:
		Intern();
		~Intern();
	class InvalidFormException : public std::exception {
		public:
			const char* what() const throw() {
			return ("InternException: Form type not found.");
		}
	};
	Form* makeForm(const std::string& formName, const std::string& target) const;
};

#endif