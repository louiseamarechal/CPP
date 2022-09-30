/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapGetters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:24:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 11:20:29 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName() const {

	return (this->_Name);
}

int	ClapTrap::getHitPoints() const {

	return (this->_HitPoints);
}

int	ClapTrap::getEnergyPoints() const {

	return (this->_EnergyPoints);
}

int	ClapTrap::getAttackDamage() const {

	return (this->_AttackDamage);
}
