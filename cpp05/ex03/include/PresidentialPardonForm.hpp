/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:04:53 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/11 14:44:24 by ktashbae         ###   ########.fr       */
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
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &Parent);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &cpyParent);
		std::string	getTarget(void) const;
		void execute(Bureaucrat const &executor) const;
};

#endif
