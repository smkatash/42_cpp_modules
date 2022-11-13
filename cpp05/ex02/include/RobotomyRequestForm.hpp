/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:04:01 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 14:25:05 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form {
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const& Parent);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& cpyParent);
		std::string	getTarget(void) const;
		void execute(Bureaucrat const& executor) const;
		class RobotomyException : public Form::Exception
		{
			public:
				virtual const std::string message() const throw();
		};
};

#endif 