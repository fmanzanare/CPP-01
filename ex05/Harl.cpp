/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:00:35 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/29 18:06:15 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!\n";
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level) {
	void	(Harl::*functions[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	std::string	map[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int	i;
	for (i = 0; i < 4; i++) {
		if (map[i] == level) {
			(this->*functions[i])();
			break ;
		}
	}
	if (i == 4)
		std::cout << "Please type a correct level (DEBUG, INFO, WARNING, ERROR)\n";
}
