/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:55:44 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/15 19:29:00 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <climits>

// class definition
class Contact {
private:
	// private data members
	static const int FIELDS_ARG = 5;
	int index;
	std::string fieldInfo[FIELDS_ARG];

public:
	// public member functions
	// this is the constructor
	Contact();
	// this is the deconstructor
	~Contact();
	int getData(int index);
	void displayRows();
	void displayTable();
};

#endif
