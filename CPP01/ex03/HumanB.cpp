/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:17:31 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 17:30:04 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL) {
	std::cout << "HumanB: " << this->_name << " created!" << std::endl;
	return ;
}

HumanB::~HumanB() {
	std::cout << this->_name << " killed." << std::endl;
	return ;
}

// void	HumanB::getName() {
// 	if (this->_type == NULL)
// 	{
// 		std::cout << "I don't have any weapon !" << std::endl;
// 		return ;
// 	}
// 	std::cout << "My weapon is : " << this->_type->getType() << std::endl;
// }

void	HumanB::attack() {
	if (this->_type == NULL)
	{
		std::cout << "I don't have any weapon !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type) {
	// &type = type.getType();
	this->_type = &type;
	// std::cout << "Set Weapon : " << this->_type->getType() << std::endl;
}
