/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapGetters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:24:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 12:02:55 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName() const {

	return (this->_name);
}

int	ClapTrap::getHitPoints() const {

	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints() const {

	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage() const {

	return (this->_attackDamage);
}
