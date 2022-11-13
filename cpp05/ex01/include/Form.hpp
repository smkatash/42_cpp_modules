/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:05:19 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 14:11:54 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

    public:
        Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &Parent);
		~Form(void);
		Form& operator=(const Form& cpyParent);
        const std::string	getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				getSigned(void) const;
		void				setSigned(const bool new_value);
    
        class Exception : public std::exception{ 
            public:
                virtual const std::string message() const throw();
		};
		class GradeTooLowException : public Form::Exception{
		    public:
				virtual const std::string message() const throw();
		};
		class GradeTooHighException : public Form::Exception{
			public:
				virtual const std::string message() const throw();
		};
        void	beSigned(Bureaucrat& param);
};

std::ostream& operator<<(std::ostream& o, Form const & crnt);

#endif