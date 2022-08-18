/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:02:17 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 14:48:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {

	Harl	yo;

	std::cout << "Debug level :" << std::endl;
	std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
	yo.complain("debug");

	std::cout << "Info level :" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
	yo.complain("info");

	std::cout << "Warning level :" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	yo.complain("warning");

	std::cout << "Error level :" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	yo.complain("error");

	return 0;
}
