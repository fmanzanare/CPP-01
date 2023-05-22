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
	Zombie *horde;

	horde = zombieHorde(20, "Foo");
	for (int i = 0; i < 20; i++)
		horde[i].announce();
	std::cout << "The horde will be destroyed" << std::endl;
	delete [] horde;
}
