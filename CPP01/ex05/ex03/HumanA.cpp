/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:36:55 by louisea           #+#    #+#             */
/*   Updated: 2022/08/17 10:27:40 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type) {
	std::cout << "HumanA: " << this->_name << " created!" << std::endl;
	return ;
}

HumanA::~HumanA() {
	// std::cout << this->_name << " killed!" << std::endl;
	return ;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}
