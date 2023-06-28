/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:39:38 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/28 20:00:04 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA() {}

void	HumanA::attack(void) {
	std::cout << this->_name + " attacks with their " + this->_weapon->getType() + "\n";
}
