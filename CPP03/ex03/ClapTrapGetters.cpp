/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapGetters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:24:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:41:49 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::getName() const {

	return (this->name);
}

int	ClapTrap::getHitPoints() const {

	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints() const {

	return (this->energyPoints);
}

int	ClapTrap::getAttackDamage() const {

	return (this->attackDamage);
}