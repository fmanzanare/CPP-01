/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:31:00 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 11:26:31 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool	is_digits(std::string str)
{
	for (unsigned long int i = 0; i < str.length(); i++)
	{
		if (!(str.at(i) >= '0' && str.at(i) <= '9'))
			return (false);
	}
	return (true);
}

std::string getInput(void)
{
	std::string c_input = "";

	do {
		if (!std::getline(std::cin, c_input))
		{
			std::cout << "\n";
			exit(0);
		}
		if (c_input.length() == 0)
			std::cout << "Error: You must enter a value: ";
	} while (c_input.length() == 0);
	return (c_input);
}

int	main(void) {
	std::string	s_input;
	int			horde_len;
	std::string	name;

	do {
		std::cout << "Enter the horde size: ";
		s_input = getInput();
		if (!is_digits(s_input))
			std::cout << "Error - Please insert a number.\n";
	} while (!is_digits(s_input));
	horde_len = std::atoi(s_input.c_str());

	std::cout << "Enter a name for the horde members: ";
	name = getInput();

	Zombie *horde = zombieHorde(horde_len, name);

	for (int i = 0; i < horde_len; i++)
		horde[i].announce();

	delete[] horde;
}
