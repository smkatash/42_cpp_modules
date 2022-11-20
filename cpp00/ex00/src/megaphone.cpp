/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:47:15 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/01 18:01:19 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Loops over string and if lower case char, bitwise changes to uppercase char
std::string	megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = char(str[i] & 95);
	return str;
}

// If argument count is less than 1, throws an error output. Else, loops over argument vectors 
// and outputs the string changed from lowercase to uppercase by megaphone function
int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout << megaphone(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
