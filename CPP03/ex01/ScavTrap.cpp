/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:55:03 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:57:16 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	this->name = "";
	this->hitPoints = 0;
	this->energyPoints = 0;
	this->attackDamage = 0;

	std::cout << "ScavTrap default constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string name ) {

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap deconstructor called" << std::endl;

	return ;
}

ScavTrap const	&ScavTrap::operator=( ScavTrap const & rhs ) {

	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}

	return (*this);
}

void	ScavTrap::attack( const std::string & target) {

	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "You are too weak to attack" << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing ";
	std::cout << this->attackDamage << " points of damage !" << std::endl;

	this->energyPoints--;
}

void	ScavTrap::guardGate() {

	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "You are too weak to enter Gate Keeper Mode" << std::endl;
		return ;
	}

	std::cout << "ScavTrap has entered Gate Keeper Mode !" << std::endl;
}