/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:50:56 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/27 17:24:29 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {}

void Zombie::announce(void) {
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
