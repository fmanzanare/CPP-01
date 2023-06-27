/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:00:26 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/27 17:25:31 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {
	std::string	name;

	std::cout << "Insert the zombie name: ";
	std::getline(std::cin, name);
	Zombie	zombie(name);
	zombie.announce();
	std::cout << "Zombie on stack is automatically deleted!" << std::endl;

	Zombie	*heap_zombie = newZombie(name);
	heap_zombie->announce();
	delete heap_zombie;
	std::cout << "Zombie on heap is destroyed with destructor!" << std::endl;
}
