/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:52:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 12:10:05 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack( const std::string & target) {

	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "You are too weak to attack" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing ";
	std::cout << this->_attackDamage << " points of damage !" << std::endl;

	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "You are too weak to take Damage" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit points" << std::endl;

	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "You are too weak to be repaired" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " wins " << amount << " hit points" << std::endl;

	this->_hitPoints += amount;
	this->_energyPoints--;
}
