/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:43:56 by fmanzana          #+#    #+#             */
/*   Updated: 2023/05/22 20:43:56 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	std::cout << "A new Zombie is created in stack." << std::endl;
	randomChump("Foo");
	std::cout << "The Zombie is detroyed, automatically, by the stack." << std::endl;

	std::cout << "A new Zombie is created on the heap." << std::endl;
	zombie = newZombie("Bar");
	zombie->announce();
	std::cout << "This Zombie is not destroyed automatically, so it needs to be deleted." << std::endl;
	delete zombie;
	return (0);
}
