/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:47:15 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/14 13:29:03 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(char *str)
{
	int	i;

	for (i = 0; str && str[i]; i++);
	return (i);
}

std::string	megaphone(std::string str)
{
	for (int i = 0; str[i]; i++)
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = char(str[i] & '_');
	return str;
}

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
