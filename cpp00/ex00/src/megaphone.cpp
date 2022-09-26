/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:47:15 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/15 11:51:50 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Loops over string and returns it's length
int	ft_strlen(char *str)
{
	int	i;

	for (i = 0; str && str[i]; i++);
	return (i);
}

// Loops over string and if lower case char, bitwise changes to uppercase char
std::string	megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = char(str[i] & '_');
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
