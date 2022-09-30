/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:05:19 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/30 14:32:49 by kanykei          ###   ########.fr       */
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
        Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& Parent);
		virtual ~Form();
		Form& operator=(const Form& cpyParent);
        const std::string	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSigned( void ) const;
		void				setSigned( const bool new_value);
    
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
		class UnsignedFormException : public Form::Exception{
			public:
				virtual const std::string message() const throw();
		};
        void	beSigned(Bureaucrat& param);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& o, Form const & crnt);

#endif