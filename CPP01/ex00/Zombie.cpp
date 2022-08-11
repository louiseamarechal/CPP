/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:43:29 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/11 18:25:10 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("") {
	return;
}

Zombie::~Zombie(void) {
	return;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name) {
	this->_name = name;
}
