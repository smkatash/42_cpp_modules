/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:22:40 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/02 23:52:46 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

// .good(): check if this stream has raised any error or not.
//.peek(): retrieves the next character from the stream without actually consuming it,"previewing"
//.eof(): is used to check if the stream is has raised any EOF
// write: inserts the first n characters of the array pointed by s into the stream.
// std::string:: data() returns an array that is owned by the string.
// std::string::npos "until the end of the string".
void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream read_in(filename);
	if (!read_in) {
		std::cerr << "replace: file does not exist" << std::endl;
		exit(-1);
	}
	if (read_in.good()) {
		if (read_in.peek() == std::ifstream::traits_type::eof())
				std::cout << "replace: file is empty" << std::endl;
		else {
			std::ofstream write_out(filename.append(".replace").data());
			while (read_in.good() && write_out.good()) {
				std::string line;
				std::size_t word;
				std::getline(read_in, line);
				word = line.find(s1, 0);
				while (word != std::string::npos)
				{
					line.erase(word, s1.length());
					line.insert(word, s2);
					word = line.find(s1, word);
				}
				write_out << line;
				if (read_in.eof())
					break;
				write_out << std::endl;
			}
			read_in.close();
			write_out.close();
		}
	}
	else
		std::cout << "Error: " << strerror(errno) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv[1], argv[2], argv[3]);
	else {
		std::cerr << "Error: ./replace <filename> <string1> <string2>" << std::endl;
		exit(-1);
	}
	return 0;
}
