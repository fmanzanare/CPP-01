/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:00:26 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 11:26:37 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

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
	std::string	name;

	std::cout << "Insert the zombie name: ";
	name = getInput();
	std::cout << "Zombie created and announced with randomChump(name)\n";
	randomChump(name);

	std::cout << std::endl;

	std::cout << "Insert the zombie name: ";
	name = getInput();
	std::cout << "Zombie created and announced with newZombie(name)\n";
	Zombie	*heap_zombie = newZombie(name);
	heap_zombie->announce();
	delete heap_zombie;
}
