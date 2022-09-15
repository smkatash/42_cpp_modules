/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:56:33 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/15 12:15:22 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <sstream>

class PhoneBook{
	private:
	// private data members
	static const int MAX_CONTACTS = 8;
	int indexContact;
	int totalContacts;
	Contact *contacts[MAX_CONTACTS];

	public:
	// public member functions
		// this is the constructor
		PhoneBook();
		// this is the deconstructor
		~PhoneBook();
		void	addContact(void);
		void	searchContact();

};

#endif
