/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:03:51 by ktashbae          #+#    #+#             */
/*   Updated: 2022/11/13 00:01:30 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main(int argc, char **argv)
{
	std::cout << (int)std::numeric_limits<char>::min() << std::endl;
	std::cout << (int)std::numeric_limits<char>::max() << std::endl;
	std::cout << (int)std::numeric_limits<int>::min() << std::endl;
	std::cout << (int)std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<double>::min() << std::endl;
	std::cout << std::numeric_limits<double>::max() << std::endl;
	return 0;
}