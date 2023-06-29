/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:51:29 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 19:06:12 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc == 2) {
		harl.filter(argv[1]);
	} else {
		std::cout << "Error\nYou must introduce two arguments (./harl_v2 <level>)\n";
		return (1);
	}
	return (0);
}
