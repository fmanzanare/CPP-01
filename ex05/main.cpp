/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:51:29 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 17:53:21 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
	Harl	harl;
	std::string	level;

	std::cout << "Please type a level: ";
	level = getInput();
	harl.complain(level);
	return (0);
}
