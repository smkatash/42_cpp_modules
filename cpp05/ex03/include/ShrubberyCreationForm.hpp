/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:03:04 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/30 15:07:57 by kanykei          ###   ########.fr       */
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
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& Parent);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& cpyParent);
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif
