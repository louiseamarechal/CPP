/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:12:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/18 13:59:07 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	// std::cout << "Weapon Created" << std::endl;
	return ;
}

Weapon::~Weapon() {
	// std::cout << "Weapon killed" << std::endl;
	return ;
}

const std::string&	Weapon::getType() const {

	const std::string&	typeRef = this->_type;

	return (typeRef);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
