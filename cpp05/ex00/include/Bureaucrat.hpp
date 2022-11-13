/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 07:17:11 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 13:58:50 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& Parent);
		~Bureaucrat(void);
		Bureaucrat & operator=(const Bureaucrat& cpyParent);
		const std::string getName( void ) const;
		int		getGrade( void ) const;
		void	setGrade(const int grade);
		void	incrementGrade( void );
		void	decrementGrade( void );
		class Exception : public std::exception{
			public:
				virtual const std::string message() const throw();
		};
		class GradeTooLowException : public Bureaucrat::Exception{
			public:
				virtual const std::string message() const throw();
		};
		class GradeTooHighException : public Bureaucrat::Exception{
			public:
				virtual const std::string message() const throw();
		};
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & crnt);

#endif