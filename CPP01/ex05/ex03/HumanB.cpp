/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:17:31 by louisea           #+#    #+#             */
/*   Updated: 2022/08/17 10:27:35 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL) {
	std::cout << "HumanB: " << this->_name << " created!" << std::endl;
	return ;
}

HumanB::~HumanB() {
	// std::cout << this->_name << " killed." << std::endl;
	return ;
}

void	HumanB::attack() {
	if (this->_type == NULL)
	{
		std::cout << "I don't have any weapon !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type) { // je demande a recevoir la reference de l'objet Weapon (et non une copie)
	this->_type = &type; // this->_type est un ptr sur l'objet Weapon donc je le re-reference
}
