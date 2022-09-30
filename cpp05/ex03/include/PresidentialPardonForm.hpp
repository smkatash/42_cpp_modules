/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:04:53 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/30 14:00:45 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTAILPARDONFORM_HPP
# define PRESIDENTAILPARDONFORM_HPP

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & Parent);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & cpyParent);
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif
