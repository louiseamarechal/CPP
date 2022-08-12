/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:28:43 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/12 15:07:39 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {

	std::string	string = "HI THIS IS BRAIN";

	std::string*	stringPTR = &string;

	std::string&	stringREF = string;

	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}
