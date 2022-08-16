/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:17:31 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 14:55:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type("") {
	std::cout << "HumanB " << this->_name << " created!" << std::endl;
	return ;
}

HumanB::~HumanB() {
	std::cout << this->_name << " killed." << std::endl;
	return ;
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon type) {
	this->_type = type;
}
