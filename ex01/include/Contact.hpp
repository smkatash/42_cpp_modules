/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:55:44 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/14 16:57:45 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <climits>

class Contact {
	public:
		Contact();
		~Contact();
		int getData(int index);
		void displayRows();
		void displayTable();

	private:
		static const int FIELDS_ARG = 5;
		enum fields {
			firstName = 0,
			lastName,
			nickName,
			phone,
			darkestSecret
		};
		int index;
		std::string fieldInfo[FIELDS_ARG];
};

#endif
