/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:52:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:43:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack( const std::string & target) {

	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "You are too weak to attack" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing ";
	std::cout << this->attackDamage << " points of damage !" << std::endl;

	this->energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "You are too weak to take Danage" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " loses " << amount << " hit points" << std::endl;

	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "You are too weak to be repaired" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " wins " << amount << " hit points" << std::endl;

	this->hitPoints += amount;
	this->energyPoints--;
}
