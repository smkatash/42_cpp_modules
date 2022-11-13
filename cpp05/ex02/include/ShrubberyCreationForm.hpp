/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:03:04 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 14:25:30 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <iomanip>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const& Parent);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &cpyParent);
		std::string	getTarget(void) const;
		void execute(Bureaucrat const &executor) const;
};

#endif
