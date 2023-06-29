/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:40:08 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 12:43:14 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace_strings(std::string &file_cnt, std::string s1, std::string s2) {
	if (file_cnt.find(s1) == std::string::npos)
		return (1);
	else if (s1 == s2)
		return (2);
	else {
		std::size_t	idx = 0;
		while (idx != std::string::npos) {
			idx = file_cnt.find(s1, idx);
			if (idx != std::string::npos) {
				file_cnt.erase(idx, s1.length());
				file_cnt.insert(idx, s2);
			}
		}
	}
	return (0);
}

int	main(int argc, char **argv) {
	std::string	file_name;
	std::string	s1;
	std::string	s2;

	if (argc == 4) {
		file_name = argv[1];
		s1 = argv[2];
		s2 = argv[3];

		char			c;
		std::string		file_cnt = "";
		std::ifstream	file(file_name);

		if (!file) {
			std::cout << "Error: " + file_name + " does not exist.\n";
			return (1);
		}
		while (file.eof() == 0)
		{
			file.get(c);
			file_cnt += c;
		}

		std::cout << "Outfile created and Infile content on it.\n";
		int	checker;
		checker = replace_strings(file_cnt, s1, s2);
		if (checker == 1) {
			std::cout << "The word to be replaced is not found on the file.\n";
			return (0);
		} else if (checker == 2) {
			std::cout << "Both words are the same.\n";
			return (0);
		}

		std::ofstream	ofile(file_name + ".replace");
		ofile << file_cnt;
	}
	else {
		std::cout << "Error\nInstructions: ./sed <file_name> <word1> <word2>\n";
		return (1);
	}
	return (0);
}
