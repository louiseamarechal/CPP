/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:12:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 15:58:44 by lmarecha         ###   ########.fr       */
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

	std::string&	typeRef = this->_type;

	return (typeRef);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
