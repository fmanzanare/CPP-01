/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:46:00 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/28 20:00:49 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack(void) {
	if (this->_weapon->getType().length() != 0)
		std::cout << this->_name + " attacks with their " + this->_weapon->getType() + "\n";
	else
		std::cout << this->_name + " has no weapon\n";
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
