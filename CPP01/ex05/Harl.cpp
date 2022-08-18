/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:02:36 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 14:41:48 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}


void	Harl::complain( std::string level ) {

	int			i = 0;
	void		(Harl::*fctPtr[4])(void);
	std::string	complains[4] = {"debug", "info", "warning", "error"};

	fctPtr[0]= &Harl::_debug;
	fctPtr[1]= &Harl::_info;
	fctPtr[2]= &Harl::_warning;
	fctPtr[3]= &Harl::_error;

	while (i < 4)
	{
		if (complains[i] == level)
			(this->*fctPtr[i])();
		i++;
	}
}

void	Harl::_debug( void ) {
	std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
}

void	Harl::_info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
}

void	Harl::_warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::_error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
