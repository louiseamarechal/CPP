/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:43:29 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 14:58:55 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is dead" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
