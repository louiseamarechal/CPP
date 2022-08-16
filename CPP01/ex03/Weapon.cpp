/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:12:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 12:33:45 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon Created" << std::endl;
	return ;
}

Weapon::~Weapon() {
	std::cout << "Weapon killed" << std::endl;
	return ;
}

std::string&	Weapon::getType() {
	return (this->&_type);
}

std::string	Weapon::setType(std::string type) {
	this->_type = type;
}
