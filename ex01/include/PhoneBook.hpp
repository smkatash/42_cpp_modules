/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:56:33 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/14 16:24:42 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <sstream>

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact(void);
		void	searchContact();

	private:
	static const int MAX_CONTACTS = 8;
	int indexContact;
	int totalContacts;
	Contact *contacts[MAX_CONTACTS];
};

#endif
