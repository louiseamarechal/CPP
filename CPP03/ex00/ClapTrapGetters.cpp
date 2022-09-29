/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapGetters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:24:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 18:32:32 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName() {

	return (this->_Name);
}

int	ClapTrap::getHitPoints() {

	return (this->_HitPoints);
}

int	ClapTrap::getEnergyPoints() {

	return (this->_EnergyPoints);
}

int	ClapTrap::getAttackDamage() {

	return (this->_AttackDamage);
}
