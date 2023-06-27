/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:02:53 by fmanzana          #+#    #+#             */
/*   Updated: 2023/06/27 19:12:07 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str memory address: ";
	std::cout << &str;
	std::cout << "\n";
	std::cout << "stringPTR memory address: ";
	std::cout << &stringPTR;
	std::cout << "\n";
	std::cout << "stringREF memory address: ";
	std::cout << &stringREF;
	std::cout << "\n";
}
