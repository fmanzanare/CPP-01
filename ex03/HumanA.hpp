/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:39:37 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/28 19:57:00 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string _name;
		Weapon		*_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
};

#endif
