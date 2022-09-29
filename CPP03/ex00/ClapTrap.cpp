/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:52:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 18:24:21 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack( const std::string & target) {

	if (this->_HitPoints <= 0 || this->_EnergyPoints <= 0)
	{
		std::cout << "You are too weak to attack" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing ";
	std::cout << this->_AttackDamage << " points of damage !" << std::endl;

	this->_EnergyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_Name << " loses " << amount << "hit points" << std::endl;

	this->_HitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << "ClapTrap " << this->_Name << " wins " << amount << " hit points" << std::endl;

	this->_HitPoints += amount;
	this->_EnergyPoints--;
}
